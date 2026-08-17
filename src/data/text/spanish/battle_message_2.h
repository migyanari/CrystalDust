// Battle message UI strings (battle_message_2)

const u8 gText_PkmnIsEvolving[] = _("¡Anda!\n¡{STR_VAR_1} está evolucionando!");
const u8 gText_CongratsPkmnEvolved[] = _("¡Enhorabuena! ¡Tu {STR_VAR_1}\nse ha convertido en {STR_VAR_2}!{WAIT_SE}\p");
const u8 gText_PkmnStoppedEvolving[] = _("¿Eh? ¡La evolución de\n{STR_VAR_1} se ha detenido!\p");
const u8 gText_EllipsisQuestionMark[] = _("… …?\p");
const u8 gText_WhatWillPkmnDo[] = _("¿Qué debería hacer\n{B_ACTIVE_NAME_WITH_PREFIX}?");
const u8 gText_WhatWillPkmnDo2[] = _("¿Qué debería hacer\n{B_PLAYER_NAME}?");
const u8 gText_WhatWillTheDudeDo[] = _("¿Qué hará el\nseñor mayor?");
const u8 gText_LinkStandby[] = _("{PAUSE 16}Esperando conexión…");
const u8 gText_BattleMenu[] = _("LUCHA{CLEAR_TO 56}MOCHILA\nPOKéMON{CLEAR_TO 56}HUIDA");
const u8 gText_SafariZoneMenu[] = _("BALL{CLEAR_TO 56}{POKEBLOCK}\nACERCAR{CLEAR_TO 56}HUIDA");
const u8 gText_BugCatchingContestMenu[] = _("LUCHA{CLEAR_TO 56}BALL{FONT SMALL}×{STR_VAR_1}\n{FONT NORMAL}POKéMON{CLEAR_TO 56}HUIDA");
const u8 gText_MoveInterfacePP[] = _("PP ");
const u8 gText_MoveInterfaceType[] = _("TIPO/");
const u8 gText_MoveInterfacePpType[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}PP\nTIPO/");
const u8 gText_MoveInterfaceDynamicColors[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}");
const u8 gText_WhichMoveToForget4[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}¿Qué movimiento debería\nolvidar?");
const u8 gText_BattleYesNoChoice[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}Sí\nNo");
const u8 gText_BattleSwitchWhich[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}¿Cuál\ncambias?");
const u8 gText_BattleSwitchWhich2[] = _("{PALETTE 5}{COLOR_HIGHLIGHT_SHADOW DYNAMIC_COLOR4 DYNAMIC_COLOR5 DYNAMIC_COLOR6}");
const u8 gText_BattleSwitchWhich3[] = _("{UP_ARROW}");
const u8 gText_BattleSwitchWhich4[] = _("{ESCAPE 4}");
const u8 gText_BattleSwitchWhich5[] = _("-");

static const u8 sText_HP[] = _("PS");
static const u8 sText_Attack[] = _("ATAQUE");
static const u8 sText_Defense[] = _("DEFENSA");
static const u8 sText_SpAtk[] = _("AT. ESP.");
static const u8 sText_SpDef[] = _("DEF. ESP.");

// Unused
static const u8 * const sStatNamesTable2[] =
{
    sText_HP, sText_SpAtk, sText_Attack,
    sText_SpDef, sText_Defense, sText_Speed
};

const u8 gText_SafariBalls[] = _("{HIGHLIGHT DARK_GRAY}SAFARI BALLS");
const u8 gText_SafariBallLeft[] = _("{HIGHLIGHT DARK_GRAY}Tienes: $" "{HIGHLIGHT DARK_GRAY}");
const u8 gText_Sleep[] = _("sueño");
const u8 gText_Poison[] = _("envenenamiento");
const u8 gText_Burn[] = _("quemaduras");
const u8 gText_Paralysis[] = _("parálisis");
const u8 gText_Ice[] = _("congelación");
const u8 gText_Confusion[] = _("confusión");
const u8 gText_Love[] = _("enamoramiento");
const u8 gText_SpaceAndSpace[] = _(" y ");
const u8 gText_CommaSpace[] = _(", ");
const u8 gText_Space2[] = _(" ");
const u8 gText_LineBreak[] = _("\l");
const u8 gText_NewLine[] = _("\n");
const u8 gText_Are[] = _("no pueden");
const u8 gText_Are2[] = _("no pueden");
const u8 gText_BadEgg[] = _("HUEVO malo");
const u8 gText_BattleWallyName[] = _("WALLY");
const u8 gText_Win[] = _("{HIGHLIGHT TRANSPARENT}Victoria");
const u8 gText_Loss[] = _("{HIGHLIGHT TRANSPARENT}Derrota");
const u8 gText_Draw[] = _("{HIGHLIGHT TRANSPARENT}Empate");
static const u8 sText_SpaceIs[] = _(" es");
static const u8 sText_ApostropheS[] = _("de");

// For displaying names of invalid moves
static const u8 sATypeMove_Table[NUMBER_OF_MON_TYPES][17] =
{
    [TYPE_NORMAL]   = _("un mov. NORMAL"),
    [TYPE_FIGHTING] = _("un mov. LUCHA"),
    [TYPE_FLYING]   = _("un mov. VOLADOR"),
    [TYPE_POISON]   = _("un mov. VENENO"),
    [TYPE_GROUND]   = _("un mov. TIERRA"),
    [TYPE_ROCK]     = _("un mov. ROCA"),
    [TYPE_BUG]      = _("un mov. BICHO"),
    [TYPE_GHOST]    = _("un mov. FANTASMA"),
    [TYPE_STEEL]    = _("un mov. ACERO"),
    [TYPE_MYSTERY]  = _("un mov. (?)"),
    [TYPE_FIRE]     = _("un mov. FUEGO"),
    [TYPE_WATER]    = _("un mov. AGUA"),
    [TYPE_GRASS]    = _("un mov. PLANTA"),
    [TYPE_ELECTRIC] = _("un mov. ELÉCTRICO"),
    [TYPE_PSYCHIC]  = _("un mov. PSÍQUICO"),
    [TYPE_ICE]      = _("un mov. HIELO"),
    [TYPE_DRAGON]   = _("un mov. DRAGÓN"),
    [TYPE_DARK]     = _("un mov. SINIESTRO")
};

const u8 gText_BattleTourney[] = _("TORNEO DE COMBATE");
static const u8 sText_Round1[] = _("1ª. Ronda");
static const u8 sText_Round2[] = _("2ª. Ronda");
static const u8 sText_Semifinal[] = _("Semifinal");
static const u8 sText_Final[] = _("Final");

const u8 *const gRoundsStringTable[DOME_ROUNDS_COUNT] =
{
    [DOME_ROUND1]    = sText_Round1,
    [DOME_ROUND2]    = sText_Round2,
    [DOME_SEMIFINAL] = sText_Semifinal,
    [DOME_FINAL]     = sText_Final
};

const u8 gText_TheGreatNewHope[] = _("¡La gran esperanza!\p");
const u8 gText_WillChampionshipDreamComeTrue[] = _("¿Se cumplirá el sueño de la\nLIGA POKéMON?!\p");
const u8 gText_AFormerChampion[] = _("Un ex-CAMPEÓN!\p");
const u8 gText_ThePreviousChampion[] = _("¡El CAMPEÓN anterior!\p");
const u8 gText_TheUnbeatenChampion[] = _("¡El CAMPEÓN invicto!\p");
const u8 gText_PlayerMon1Name[] = _("{B_PLAYER_MON1_NAME}");
const u8 gText_Vs[] = _("VS");
const u8 gText_OpponentMon1Name[] = _("{B_OPPONENT_MON1_NAME}");
const u8 gText_Mind[] = _("Mente");
const u8 gText_Skill[] = _("Habilidad");
const u8 gText_Body[] = _("Cuerpo");
const u8 gText_Judgement[] = _("{B_BUFF1}{CLEAR 13}JUICIO{CLEAR 13}{B_BUFF2}");
