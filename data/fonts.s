	.include "asm/macros.inc"
	.include "constants/constants.inc"

	.section .rodata

	.align 2
gFont8LatinGlyphs::
.if SPANISH == 1
	.incbin "graphics/fonts/spanish/latin_small_narrow.latfont"
.else
	.incbin "graphics/fonts/font8.latfont"
.endif

	.align 2
gFont8LatinGlyphWidths::
.if SPANISH == 1
	.include "graphics/fonts/spanish/latin_small_narrow_widths.inc"
.else
	.include "graphics/fonts/font8_latin_widths.inc"
.endif

	.align 2
gFont0LatinGlyphs::
.if SPANISH == 1
	.incbin "graphics/fonts/spanish/latin_small.latfont"
.else
	.incbin "graphics/fonts/font0.latfont"
.endif

	.align 2
gFont0LatinGlyphWidths::
.if SPANISH == 1
	.include "graphics/fonts/spanish/latin_small_widths.inc"
.else
	.include "graphics/fonts/font0_latin_widths.inc"
.endif

	.align 2
gFont7LatinGlyphs::
.if SPANISH == 1
	.incbin "graphics/fonts/spanish/latin_narrow.latfont"
.else
	.incbin "graphics/fonts/font7.latfont"
.endif

	.align 2
gFont7LatinGlyphWidths::
.if SPANISH == 1
	.include "graphics/fonts/spanish/latin_narrow_widths.inc"
.else
	.include "graphics/fonts/font7_latin_widths.inc"
.endif

	.align 2
gFont2LatinGlyphs::
.if SPANISH == 1
	.incbin "graphics/fonts/spanish/latin_short.latfont"
.else
	.incbin "graphics/fonts/font2.latfont"
.endif

	.align 2
gFont2LatinGlyphWidths::
.if SPANISH == 1
	.include "graphics/fonts/spanish/latin_short_widths.inc"
.else
	.include "graphics/fonts/font2_latin_widths.inc"
.endif

	.align 2
gFont1LatinGlyphs::
.if SPANISH == 1
	.incbin "graphics/fonts/spanish/latin_normal.latfont"
.else
	.incbin "graphics/fonts/font1.latfont"
.endif

	.align 2
gFont1LatinGlyphWidths::
.if SPANISH == 1
	.include "graphics/fonts/spanish/latin_normal_widths.inc"
.else
	.include "graphics/fonts/font1_latin_widths.inc"
.endif

	.align 2
gFont0JapaneseGlyphs::
	.incbin "graphics/fonts/font0.hwjpnfont"

	.align 2
gFont1JapaneseGlyphs::
	.incbin "graphics/fonts/font1.hwjpnfont"

	.align 2
gUnusedJapaneseFireRedLeafGreenMaleFontGlyphs::
	.incbin "graphics/fonts/unused_frlg_male.fwjpnfont"

	.align 2
gUnusedJapaneseFireRedLeafGreenMaleFontGlyphWidths::
	.include "graphics/fonts/unused_japanese_frlg_male_font_widths.inc"

	.align 2
gUnusedJapaneseFireRedLeafGreenFemaleFontGlyphs::
	.incbin "graphics/fonts/unused_frlg_female.fwjpnfont"

	.align 2
gUnusedJapaneseFireRedLeafGreenFemaleFontGlyphWidths::
	.include "graphics/fonts/unused_japanese_frlg_female_font_widths.inc"

	.align 2
gFont2JapaneseGlyphs::
	.incbin "graphics/fonts/font2.fwjpnfont"

	.align 2
gFont2JapaneseGlyphWidths::
	.include "graphics/fonts/font2_japanese_widths.inc"
