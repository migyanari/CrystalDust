#!/usr/bin/env python3
"""Extract Spanish type icons from menu_info_es.4bpp into move_types_es.4bpp."""

from __future__ import annotations

import sys
from pathlib import Path

SHEET_TILE_WIDTH = 128  # pixels; BlitMenuInfoIcon passes srcWidth=128
ICON_SLOT_SIZE = 0x100  # 32x16 @ 4bpp, 8 tiles
ICON_Y_OFFSET = 2       # EN move_types.4bpp centers 32x12 icons at rows 2-13
NUM_MON_TYPES = 18
NUM_CONTEST_TYPES = 5

# { width, height, tile_offset } from src/menu.c sMenuInfoIcons (iconId = type + 1)
MENU_INFO_ICONS: dict[int, tuple[int, int, int]] = {
    0: (32, 12, 0x20),   # TYPE_NORMAL
    1: (32, 12, 0x64),   # TYPE_FIGHTING
    2: (32, 12, 0x60),   # TYPE_FLYING
    3: (32, 12, 0x80),   # TYPE_POISON
    4: (32, 12, 0x48),   # TYPE_GROUND
    5: (32, 12, 0x44),   # TYPE_ROCK
    6: (32, 12, 0x6C),   # TYPE_BUG
    7: (32, 12, 0x68),   # TYPE_GHOST
    8: (32, 12, 0x88),   # TYPE_STEEL
    9: (32, 12, 0xA4),   # TYPE_MYSTERY
    10: (32, 12, 0x24),  # TYPE_FIRE
    11: (32, 12, 0x28),  # TYPE_WATER
    12: (32, 12, 0x2C),  # TYPE_GRASS
    13: (32, 12, 0x40),  # TYPE_ELECTRIC
    14: (32, 12, 0x84),  # TYPE_PSYCHIC
    15: (32, 12, 0x4C),  # TYPE_ICE
    16: (32, 12, 0xA0),  # TYPE_DRAGON
    17: (32, 12, 0x8C),  # TYPE_DARK
}

TYPE_NAMES = (
    "normal", "fight", "flying", "poison", "ground", "rock", "bug", "ghost",
    "steel", "mystery", "fire", "water", "grass", "electric", "psychic", "ice",
    "dragon", "dark",
)


def read_menu_info_pixel(sheet: bytes, x: int, y: int, tile_offset: int) -> int:
    """Match BlitBitmapRect4Bit + BlitMenuInfoIcon pointer offset (gflib/blit.c)."""
    base = tile_offset * 32
    multiplier_y = (SHEET_TILE_WIDTH + (SHEET_TILE_WIDTH & 7)) >> 3
    index = (
        ((x >> 1) & 3)
        + ((x >> 3) << 5)
        + (((y >> 3) * multiplier_y) << 5)
        + (((y << 0x1D) & 0xFFFFFFFF) >> 0x1B)
        + base
    )
    if index >= len(sheet):
        return 0

    value = sheet[index]
    return (value >> ((x & 1) << 2)) & 0xF


def set_nibble(out: bytearray, width: int, x: int, y: int, nibble: int) -> None:
    row_bytes = width // 2
    byte_index = y * row_bytes + x // 2
    nibble &= 0xF
    if x & 1:
        out[byte_index] = (out[byte_index] & 0xF0) | nibble
    else:
        out[byte_index] = (out[byte_index] & 0x0F) | (nibble << 4)


def advance_metatile_position(
    sub_tile_x: int,
    sub_tile_y: int,
    metatile_x: int,
    metatile_y: int,
    metatiles_wide: int,
    metatile_width: int,
    metatile_height: int,
) -> tuple[int, int, int, int]:
    sub_tile_x += 1
    if sub_tile_x == metatile_width:
        sub_tile_x = 0
        sub_tile_y += 1
        if sub_tile_y == metatile_height:
            sub_tile_y = 0
            metatile_x += 1
            if metatile_x == metatiles_wide:
                metatile_x = 0
                metatile_y += 1
    return sub_tile_x, sub_tile_y, metatile_x, metatile_y


def linear_to_gba_tiles(src: bytes, width: int, height: int) -> bytes:
    """Convert linear 4bpp bitmap to GBA 8x8 tile order (matches tools/gbagfx)."""
    tiles_w = width // 8
    tiles_h = height // 8
    metatile_width = 1
    metatile_height = 1
    metatiles_wide = tiles_w // metatile_width
    pitch = metatiles_wide * metatile_width * 4
    num_tiles = tiles_w * tiles_h
    dest = bytearray(num_tiles * 32)

    sub_tile_x = 0
    sub_tile_y = 0
    metatile_x = 0
    metatile_y = 0
    dest_index = 0

    for _ in range(num_tiles):
        for row in range(8):
            src_y = (metatile_y * metatile_height + sub_tile_y) * 8 + row
            for col in range(4):
                src_x = (metatile_x * metatile_width + sub_tile_x) * 4 + col
                src_pixel_pair = src[src_y * pitch + src_x]
                left_pixel = src_pixel_pair >> 4
                right_pixel = src_pixel_pair & 0xF
                dest[dest_index] = (right_pixel << 4) | left_pixel
                dest_index += 1

        sub_tile_x, sub_tile_y, metatile_x, metatile_y = advance_metatile_position(
            sub_tile_x,
            sub_tile_y,
            metatile_x,
            metatile_y,
            metatiles_wide,
            metatile_width,
            metatile_height,
        )

    return bytes(dest)


def extract_icon(sheet: bytes, width: int, height: int, tile_offset: int) -> bytearray:
    """Match BlitMenuInfoIcon, pad to 32x16, encode as GBA sprite tiles."""
    linear = bytearray((32 // 2) * 16)

    for y in range(height):
        for x in range(width):
            set_nibble(
                linear,
                32,
                x,
                y + ICON_Y_OFFSET,
                read_menu_info_pixel(sheet, x, y, tile_offset),
            )

    return bytearray(linear_to_gba_tiles(bytes(linear), 32, 16))


def main() -> int:
    if len(sys.argv) != 4:
        print(f"Usage: {sys.argv[0]} <menu_info_es.4bpp> <move_types.4bpp> <move_types_es.4bpp>")
        return 1

    menu_info_path = Path(sys.argv[1])
    move_types_path = Path(sys.argv[2])
    output_path = Path(sys.argv[3])

    sheet = menu_info_path.read_bytes()
    en_move_types = move_types_path.read_bytes()

    expected_sheet_size = 256 * 32
    if len(sheet) != expected_sheet_size:
        print(f"warning: expected {expected_sheet_size} bytes in menu sheet, got {len(sheet)}")

    expected_en_size = (NUM_MON_TYPES + NUM_CONTEST_TYPES) * ICON_SLOT_SIZE
    if len(en_move_types) != expected_en_size:
        print(f"warning: expected {expected_en_size} bytes in move_types, got {len(en_move_types)}")

    output = bytearray()

    for type_id, name in enumerate(TYPE_NAMES):
        width, height, tile_offset = MENU_INFO_ICONS[type_id]
        icon = extract_icon(sheet, width, height, tile_offset)
        output.extend(icon)
        print(f"extracted {name:8s} type={type_id:2d} offset=0x{tile_offset:02X} size={width}x{height}")

    contest_offset = NUM_MON_TYPES * ICON_SLOT_SIZE
    contest_bytes = en_move_types[contest_offset:contest_offset + NUM_CONTEST_TYPES * ICON_SLOT_SIZE]
    output.extend(contest_bytes)
    print(f"appended {len(contest_bytes)} bytes of English contest type icons")

    output_path.write_bytes(output)
    print(f"wrote {output_path} ({len(output)} bytes)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
