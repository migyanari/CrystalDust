#if GAME_LANGUAGE == LANGUAGE_SPANISH
#include "spanish/pokedex_category.h"
#else
#include "english/pokedex_category.h"
#endif

const struct PokedexEntry gPokedexEntries[] =
{
    [NATIONAL_DEX_NONE] =
    {
        .categoryName = CATEGORYNAME_UNKNOWN,
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
		.pokedexShowEntry = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BULBASAUR] =
    {
        .categoryName = CATEGORYNAME_SEED,
        .height = 7,
        .weight = 69,
        .description = gBulbasaurPokedexText,
		.pokedexShowEntry = gBulbasaurPokedexShowText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IVYSAUR] =
    {
        .categoryName = CATEGORYNAME_SEED,
        .height = 10,
        .weight = 130,
        .description = gIvysaurPokedexText,
		.pokedexShowEntry = gIvysaurPokedexShowText,
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENUSAUR] =
    {
        .categoryName = CATEGORYNAME_SEED,
        .height = 20,
        .weight = 1000,
        .description = gVenusaurPokedexText,
		.pokedexShowEntry = gVenusaurPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_CHARMANDER] =
    {
        .categoryName = CATEGORYNAME_LIZARD,
        .height = 6,
        .weight = 85,
        .description = gCharmanderPokedexText,
		.pokedexShowEntry = gCharmanderPokedexShowText,
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARMELEON] =
    {
        .categoryName = CATEGORYNAME_FLAME,
        .height = 11,
        .weight = 190,
        .description = gCharmeleonPokedexText,
		.pokedexShowEntry = gCharmeleonPokedexShowText,
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARIZARD] =
    {
        .categoryName = CATEGORYNAME_FLAME,
        .height = 17,
        .weight = 905,
        .description = gCharizardPokedexText,
		.pokedexShowEntry = gCharizardPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SQUIRTLE] =
    {
        .categoryName = CATEGORYNAME_TINY_TURTLE,
        .height = 5,
        .weight = 90,
        .description = gSquirtlePokedexText,
		.pokedexShowEntry = gSquirtlePokedexShowText,
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WARTORTLE] =
    {
        .categoryName = CATEGORYNAME_TURTLE,
        .height = 10,
        .weight = 225,
        .description = gWartortlePokedexText,
		.pokedexShowEntry = gWartortlePokedexShowText,
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLASTOISE] =
    {
        .categoryName = CATEGORYNAME_SHELLFISH,
        .height = 16,
        .weight = 855,
        .description = gBlastoisePokedexText,
		.pokedexShowEntry = gBlastoisePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CATERPIE] =
    {
        .categoryName = CATEGORYNAME_WORM,
        .height = 3,
        .weight = 29,
        .description = gCaterpiePokedexText,
		.pokedexShowEntry = gCaterpiePokedexShowText,
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METAPOD] =
    {
        .categoryName = CATEGORYNAME_COCOON,
        .height = 7,
        .weight = 99,
        .description = gMetapodPokedexText,
		.pokedexShowEntry = gMetapodPokedexShowText,
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUTTERFREE] =
    {
        .categoryName = CATEGORYNAME_BUTTERFLY,
        .height = 11,
        .weight = 320,
        .description = gButterfreePokedexText,
		.pokedexShowEntry = gButterfreePokedexShowText,
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEDLE] =
    {
        .categoryName = CATEGORYNAME_HAIRY_BUG,
        .height = 3,
        .weight = 32,
        .description = gWeedlePokedexText,
		.pokedexShowEntry = gWeedlePokedexShowText,
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KAKUNA] =
    {
        .categoryName = CATEGORYNAME_COCOON,
        .height = 6,
        .weight = 100,
        .description = gKakunaPokedexText,
		.pokedexShowEntry = gKakunaPokedexShowText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEEDRILL] =
    {
        .categoryName = CATEGORYNAME_POISON_BEE,
        .height = 10,
        .weight = 295,
        .description = gBeedrillPokedexText,
		.pokedexShowEntry = gBeedrillPokedexShowText,
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEY] =
    {
        .categoryName = CATEGORYNAME_TINY_BIRD,
        .height = 3,
        .weight = 18,
        .description = gPidgeyPokedexText,
		.pokedexShowEntry = gPidgeyPokedexShowText,
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEOTTO] =
    {
        .categoryName = CATEGORYNAME_BIRD,
        .height = 11,
        .weight = 300,
        .description = gPidgeottoPokedexText,
		.pokedexShowEntry = gPidgeottoPokedexShowText,
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEOT] =
    {
        .categoryName = CATEGORYNAME_BIRD,
        .height = 15,
        .weight = 395,
        .description = gPidgeotPokedexText,
		.pokedexShowEntry = gPidgeotPokedexShowText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RATTATA] =
    {
        .categoryName = CATEGORYNAME_MOUSE,
        .height = 3,
        .weight = 35,
        .description = gRattataPokedexText,
		.pokedexShowEntry = gRattataPokedexShowText,
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RATICATE] =
    {
        .categoryName = CATEGORYNAME_MOUSE,
        .height = 7,
        .weight = 185,
        .description = gRaticatePokedexText,
		.pokedexShowEntry = gRaticatePokedexShowText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPEAROW] =
    {
        .categoryName = CATEGORYNAME_TINY_BIRD,
        .height = 3,
        .weight = 20,
        .description = gSpearowPokedexText,
		.pokedexShowEntry = gSpearowPokedexShowText,
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEAROW] =
    {
        .categoryName = CATEGORYNAME_BEAK,
        .height = 12,
        .weight = 380,
        .description = gFearowPokedexText,
		.pokedexShowEntry = gFearowPokedexShowText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EKANS] =
    {
        .categoryName = CATEGORYNAME_SNAKE,
        .height = 20,
        .weight = 69,
        .description = gEkansPokedexText,
		.pokedexShowEntry = gEkansPokedexShowText,
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARBOK] =
    {
        .categoryName = CATEGORYNAME_COBRA,
        .height = 35,
        .weight = 650,
        .description = gArbokPokedexText,
		.pokedexShowEntry = gArbokPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PIKACHU] =
    {
        .categoryName = CATEGORYNAME_MOUSE,
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
		.pokedexShowEntry = gPikachuPokedexShowText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAICHU] =
    {
        .categoryName = CATEGORYNAME_MOUSE,
        .height = 8,
        .weight = 300,
        .description = gRaichuPokedexText,
		.pokedexShowEntry = gRaichuPokedexShowText,
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDSHREW] =
    {
        .categoryName = CATEGORYNAME_MOUSE,
        .height = 6,
        .weight = 120,
        .description = gSandshrewPokedexText,
		.pokedexShowEntry = gSandshrewPokedexShowText,
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDSLASH] =
    {
        .categoryName = CATEGORYNAME_MOUSE,
        .height = 10,
        .weight = 295,
        .description = gSandslashPokedexText,
		.pokedexShowEntry = gSandslashPokedexShowText,
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORAN_F] =
    {
        .categoryName = CATEGORYNAME_POISON_PIN,
        .height = 4,
        .weight = 70,
        .description = gNidoranFPokedexText,
		.pokedexShowEntry = gNidoranFPokedexShowText,
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORINA] =
    {
        .categoryName = CATEGORYNAME_POISON_PIN,
        .height = 8,
        .weight = 200,
        .description = gNidorinaPokedexText,
		.pokedexShowEntry = gNidorinaPokedexShowText,
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDOQUEEN] =
    {
        .categoryName = CATEGORYNAME_DRILL,
        .height = 13,
        .weight = 600,
        .description = gNidoqueenPokedexText,
		.pokedexShowEntry = gNidoqueenPokedexShowText,
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORAN_M] =
    {
        .categoryName = CATEGORYNAME_POISON_PIN,
        .height = 5,
        .weight = 90,
        .description = gNidoranMPokedexText,
		.pokedexShowEntry = gNidoranMPokedexShowText,
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORINO] =
    {
        .categoryName = CATEGORYNAME_POISON_PIN,
        .height = 9,
        .weight = 195,
        .description = gNidorinoPokedexText,
		.pokedexShowEntry = gNidorinoPokedexShowText,
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDOKING] =
    {
        .categoryName = CATEGORYNAME_DRILL,
        .height = 14,
        .weight = 620,
        .description = gNidokingPokedexText,
		.pokedexShowEntry = gNidokingPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFAIRY] =
    {
        .categoryName = CATEGORYNAME_FAIRY,
        .height = 6,
        .weight = 75,
        .description = gClefairyPokedexText,
		.pokedexShowEntry = gClefairyPokedexShowText,
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFABLE] =
    {
        .categoryName = CATEGORYNAME_FAIRY,
        .height = 13,
        .weight = 400,
        .description = gClefablePokedexText,
		.pokedexShowEntry = gClefablePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VULPIX] =
    {
        .categoryName = CATEGORYNAME_FOX,
        .height = 6,
        .weight = 99,
        .description = gVulpixPokedexText,
		.pokedexShowEntry = gVulpixPokedexShowText,
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINETALES] =
    {
        .categoryName = CATEGORYNAME_FOX,
        .height = 11,
        .weight = 199,
        .description = gNinetalesPokedexText,
		.pokedexShowEntry = gNinetalesPokedexShowText,
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JIGGLYPUFF] =
    {
        .categoryName = CATEGORYNAME_BALLOON,
        .height = 5,
        .weight = 55,
        .description = gJigglypuffPokedexText,
		.pokedexShowEntry = gJigglypuffPokedexShowText,
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WIGGLYTUFF] =
    {
        .categoryName = CATEGORYNAME_BALLOON,
        .height = 10,
        .weight = 120,
        .description = gWigglytuffPokedexText,
		.pokedexShowEntry = gWigglytuffPokedexShowText,
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZUBAT] =
    {
        .categoryName = CATEGORYNAME_BAT,
        .height = 8,
        .weight = 75,
        .description = gZubatPokedexText,
		.pokedexShowEntry = gZubatPokedexShowText,
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLBAT] =
    {
        .categoryName = CATEGORYNAME_BAT,
        .height = 16,
        .weight = 550,
        .description = gGolbatPokedexText,
		.pokedexShowEntry = gGolbatPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ODDISH] =
    {
        .categoryName = CATEGORYNAME_WEED,
        .height = 5,
        .weight = 54,
        .description = gOddishPokedexText,
		.pokedexShowEntry = gOddishPokedexShowText,
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLOOM] =
    {
        .categoryName = CATEGORYNAME_WEED,
        .height = 8,
        .weight = 86,
        .description = gGloomPokedexText,
		.pokedexShowEntry = gGloomPokedexShowText,
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VILEPLUME] =
    {
        .categoryName = CATEGORYNAME_FLOWER,
        .height = 12,
        .weight = 186,
        .description = gVileplumePokedexText,
		.pokedexShowEntry = gVileplumePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PARAS] =
    {
        .categoryName = CATEGORYNAME_MUSHROOM,
        .height = 3,
        .weight = 54,
        .description = gParasPokedexText,
		.pokedexShowEntry = gParasPokedexShowText,
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PARASECT] =
    {
        .categoryName = CATEGORYNAME_MUSHROOM,
        .height = 10,
        .weight = 295,
        .description = gParasectPokedexText,
		.pokedexShowEntry = gParasectPokedexShowText,
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENONAT] =
    {
        .categoryName = CATEGORYNAME_INSECT,
        .height = 10,
        .weight = 300,
        .description = gVenonatPokedexText,
		.pokedexShowEntry = gVenonatPokedexShowText,
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_VENOMOTH] =
    {
        .categoryName = CATEGORYNAME_POISON_MOTH,
        .height = 15,
        .weight = 125,
        .description = gVenomothPokedexText,
		.pokedexShowEntry = gVenomothPokedexShowText,
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_DIGLETT] =
    {
        .categoryName = CATEGORYNAME_MOLE,
        .height = 2,
        .weight = 8,
        .description = gDiglettPokedexText,
		.pokedexShowEntry = gDiglettPokedexShowText,
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUGTRIO] =
    {
        .categoryName = CATEGORYNAME_MOLE,
        .height = 7,
        .weight = 333,
        .description = gDugtrioPokedexText,
		.pokedexShowEntry = gDugtrioPokedexShowText,
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEOWTH] =
    {
        .categoryName = CATEGORYNAME_SCRATCH_CAT,
        .height = 4,
        .weight = 42,
        .description = gMeowthPokedexText,
		.pokedexShowEntry = gMeowthPokedexShowText,
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PERSIAN] =
    {
        .categoryName = CATEGORYNAME_CLASSY_CAT,
        .height = 10,
        .weight = 320,
        .description = gPersianPokedexText,
		.pokedexShowEntry = gPersianPokedexShowText,
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PSYDUCK] =
    {
        .categoryName = CATEGORYNAME_DUCK,
        .height = 8,
        .weight = 196,
        .description = gPsyduckPokedexText,
		.pokedexShowEntry = gPsyduckPokedexShowText,
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLDUCK] =
    {
        .categoryName = CATEGORYNAME_DUCK,
        .height = 17,
        .weight = 766,
        .description = gGolduckPokedexText,
		.pokedexShowEntry = gGolduckPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_MANKEY] =
    {
        .categoryName = CATEGORYNAME_PIG_MONKEY,
        .height = 5,
        .weight = 280,
        .description = gMankeyPokedexText,
		.pokedexShowEntry = gMankeyPokedexShowText,
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PRIMEAPE] =
    {
        .categoryName = CATEGORYNAME_PIG_MONKEY,
        .height = 10,
        .weight = 320,
        .description = gPrimeapePokedexText,
		.pokedexShowEntry = gPrimeapePokedexShowText,
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROWLITHE] =
    {
        .categoryName = CATEGORYNAME_PUPPY,
        .height = 7,
        .weight = 190,
        .description = gGrowlithePokedexText,
		.pokedexShowEntry = gGrowlithePokedexShowText,
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCANINE] =
    {
        .categoryName = CATEGORYNAME_LEGENDARY,
        .height = 19,
        .weight = 1550,
        .description = gArcaninePokedexText,
		.pokedexShowEntry = gArcaninePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_POLIWAG] =
    {
        .categoryName = CATEGORYNAME_TADPOLE,
        .height = 6,
        .weight = 124,
        .description = gPoliwagPokedexText,
		.pokedexShowEntry = gPoliwagPokedexShowText,
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLIWHIRL] =
    {
        .categoryName = CATEGORYNAME_TADPOLE,
        .height = 10,
        .weight = 200,
        .description = gPoliwhirlPokedexText,
		.pokedexShowEntry = gPoliwhirlPokedexShowText,
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLIWRATH] =
    {
        .categoryName = CATEGORYNAME_TADPOLE,
        .height = 13,
        .weight = 540,
        .description = gPoliwrathPokedexText,
		.pokedexShowEntry = gPoliwrathPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABRA] =
    {
        .categoryName = CATEGORYNAME_PSI,
        .height = 9,
        .weight = 195,
        .description = gAbraPokedexText,
		.pokedexShowEntry = gAbraPokedexShowText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KADABRA] =
    {
        .categoryName = CATEGORYNAME_PSI,
        .height = 13,
        .weight = 565,
        .description = gKadabraPokedexText,
		.pokedexShowEntry = gKadabraPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALAKAZAM] =
    {
        .categoryName = CATEGORYNAME_PSI,
        .height = 15,
        .weight = 480,
        .description = gAlakazamPokedexText,
		.pokedexShowEntry = gAlakazamPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHOP] =
    {
        .categoryName = CATEGORYNAME_SUPERPOWER,
        .height = 8,
        .weight = 195,
        .description = gMachopPokedexText,
		.pokedexShowEntry = gMachopPokedexShowText,
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHOKE] =
    {
        .categoryName = CATEGORYNAME_SUPERPOWER,
        .height = 15,
        .weight = 705,
        .description = gMachokePokedexText,
		.pokedexShowEntry = gMachokePokedexShowText,
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHAMP] =
    {
        .categoryName = CATEGORYNAME_SUPERPOWER,
        .height = 16,
        .weight = 1300,
        .description = gMachampPokedexText,
		.pokedexShowEntry = gMachampPokedexShowText,
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_BELLSPROUT] =
    {
        .categoryName = CATEGORYNAME_FLOWER,
        .height = 7,
        .weight = 40,
        .description = gBellsproutPokedexText,
		.pokedexShowEntry = gBellsproutPokedexShowText,
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEPINBELL] =
    {
        .categoryName = CATEGORYNAME_FLYCATCHER,
        .height = 10,
        .weight = 64,
        .description = gWeepinbellPokedexText,
		.pokedexShowEntry = gWeepinbellPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VICTREEBEL] =
    {
        .categoryName = CATEGORYNAME_FLYCATCHER,
        .height = 17,
        .weight = 155,
        .description = gVictreebelPokedexText,
		.pokedexShowEntry = gVictreebelPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_TENTACOOL] =
    {
        .categoryName = CATEGORYNAME_JELLYFISH,
        .height = 9,
        .weight = 455,
        .description = gTentacoolPokedexText,
		.pokedexShowEntry = gTentacoolPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TENTACRUEL] =
    {
        .categoryName = CATEGORYNAME_JELLYFISH,
        .height = 16,
        .weight = 550,
        .description = gTentacruelPokedexText,
		.pokedexShowEntry = gTentacruelPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GEODUDE] =
    {
        .categoryName = CATEGORYNAME_ROCK,
        .height = 4,
        .weight = 200,
        .description = gGeodudePokedexText,
		.pokedexShowEntry = gGeodudePokedexShowText,
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRAVELER] =
    {
        .categoryName = CATEGORYNAME_ROCK,
        .height = 10,
        .weight = 1050,
        .description = gGravelerPokedexText,
		.pokedexShowEntry = gGravelerPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLEM] =
    {
        .categoryName = CATEGORYNAME_MEGATON,
        .height = 14,
        .weight = 3000,
        .description = gGolemPokedexText,
		.pokedexShowEntry = gGolemPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PONYTA] =
    {
        .categoryName = CATEGORYNAME_FIRE_HORSE,
        .height = 10,
        .weight = 300,
        .description = gPonytaPokedexText,
		.pokedexShowEntry = gPonytaPokedexShowText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAPIDASH] =
    {
        .categoryName = CATEGORYNAME_FIRE_HORSE,
        .height = 17,
        .weight = 950,
        .description = gRapidashPokedexText,
		.pokedexShowEntry = gRapidashPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SLOWPOKE] =
    {
        .categoryName = CATEGORYNAME_DOPEY,
        .height = 12,
        .weight = 360,
        .description = gSlowpokePokedexText,
		.pokedexShowEntry = gSlowpokePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLOWBRO] =
    {
        .categoryName = CATEGORYNAME_HERMIT_CRAB,
        .height = 16,
        .weight = 785,
        .description = gSlowbroPokedexText,
		.pokedexShowEntry = gSlowbroPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGNEMITE] =
    {
        .categoryName = CATEGORYNAME_MAGNET,
        .height = 3,
        .weight = 60,
        .description = gMagnemitePokedexText,
		.pokedexShowEntry = gMagnemitePokedexShowText,
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGNETON] =
    {
        .categoryName = CATEGORYNAME_MAGNET,
        .height = 10,
        .weight = 600,
        .description = gMagnetonPokedexText,
		.pokedexShowEntry = gMagnetonPokedexShowText,
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FARFETCHD] =
    {
        .categoryName = CATEGORYNAME_WILD_DUCK,
        .height = 8,
        .weight = 150,
        .description = gFarfetchdPokedexText,
		.pokedexShowEntry = gFarfetchdPokedexShowText,
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DODUO] =
    {
        .categoryName = CATEGORYNAME_TWIN_BIRD,
        .height = 14,
        .weight = 392,
        .description = gDoduoPokedexText,
		.pokedexShowEntry = gDoduoPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_DODRIO] =
    {
        .categoryName = CATEGORYNAME_TRIPLE_BIRD,
        .height = 18,
        .weight = 852,
        .description = gDodrioPokedexText,
		.pokedexShowEntry = gDodrioPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEEL] =
    {
        .categoryName = CATEGORYNAME_SEA_LION,
        .height = 11,
        .weight = 900,
        .description = gSeelPokedexText,
		.pokedexShowEntry = gSeelPokedexShowText,
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEWGONG] =
    {
        .categoryName = CATEGORYNAME_SEA_LION,
        .height = 17,
        .weight = 1200,
        .description = gDewgongPokedexText,
		.pokedexShowEntry = gDewgongPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRIMER] =
    {
        .categoryName = CATEGORYNAME_SLUDGE,
        .height = 9,
        .weight = 300,
        .description = gGrimerPokedexText,
		.pokedexShowEntry = gGrimerPokedexShowText,
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUK] =
    {
        .categoryName = CATEGORYNAME_SLUDGE,
        .height = 12,
        .weight = 300,
        .description = gMukPokedexText,
		.pokedexShowEntry = gMukPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELLDER] =
    {
        .categoryName = CATEGORYNAME_BIVALVE,
        .height = 3,
        .weight = 40,
        .description = gShellderPokedexText,
		.pokedexShowEntry = gShellderPokedexShowText,
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLOYSTER] =
    {
        .categoryName = CATEGORYNAME_BIVALVE,
        .height = 15,
        .weight = 1325,
        .description = gCloysterPokedexText,
		.pokedexShowEntry = gCloysterPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GASTLY] =
    {
        .categoryName = CATEGORYNAME_GAS,
        .height = 13,
        .weight = 1,
        .description = gGastlyPokedexText,
		.pokedexShowEntry = gGastlyPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAUNTER] =
    {
        .categoryName = CATEGORYNAME_GAS,
        .height = 16,
        .weight = 1,
        .description = gHaunterPokedexText,
		.pokedexShowEntry = gHaunterPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GENGAR] =
    {
        .categoryName = CATEGORYNAME_SHADOW,
        .height = 15,
        .weight = 405,
        .description = gGengarPokedexText,
		.pokedexShowEntry = gGengarPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ONIX] =
    {
        .categoryName = CATEGORYNAME_ROCK_SNAKE,
        .height = 88,
        .weight = 2100,
        .description = gOnixPokedexText,
		.pokedexShowEntry = gOnixPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_DROWZEE] =
    {
        .categoryName = CATEGORYNAME_HYPNOSIS,
        .height = 10,
        .weight = 324,
        .description = gDrowzeePokedexText,
		.pokedexShowEntry = gDrowzeePokedexShowText,
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HYPNO] =
    {
        .categoryName = CATEGORYNAME_HYPNOSIS,
        .height = 16,
        .weight = 756,
        .description = gHypnoPokedexText,
		.pokedexShowEntry = gHypnoPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KRABBY] =
    {
        .categoryName = CATEGORYNAME_RIVER_CRAB,
        .height = 4,
        .weight = 65,
        .description = gKrabbyPokedexText,
		.pokedexShowEntry = gKrabbyPokedexShowText,
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KINGLER] =
    {
        .categoryName = CATEGORYNAME_PINCER,
        .height = 13,
        .weight = 600,
        .description = gKinglerPokedexText,
		.pokedexShowEntry = gKinglerPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLTORB] =
    {
        .categoryName = CATEGORYNAME_BALL,
        .height = 5,
        .weight = 104,
        .description = gVoltorbPokedexText,
		.pokedexShowEntry = gVoltorbPokedexShowText,
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTRODE] =
    {
        .categoryName = CATEGORYNAME_BALL,
        .height = 12,
        .weight = 666,
        .description = gElectrodePokedexText,
		.pokedexShowEntry = gElectrodePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXEGGCUTE] =
    {
        .categoryName = CATEGORYNAME_EGG,
        .height = 4,
        .weight = 25,
        .description = gExeggcutePokedexText,
		.pokedexShowEntry = gExeggcutePokedexShowText,
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXEGGUTOR] =
    {
        .categoryName = CATEGORYNAME_COCONUT,
        .height = 20,
        .weight = 1200,
        .description = gExeggutorPokedexText,
		.pokedexShowEntry = gExeggutorPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_CUBONE] =
    {
        .categoryName = CATEGORYNAME_LONELY,
        .height = 4,
        .weight = 65,
        .description = gCubonePokedexText,
		.pokedexShowEntry = gCubonePokedexShowText,
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAROWAK] =
    {
        .categoryName = CATEGORYNAME_BONE_KEEPER,
        .height = 10,
        .weight = 450,
        .description = gMarowakPokedexText,
		.pokedexShowEntry = gMarowakPokedexShowText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HITMONLEE] =
    {
        .categoryName = CATEGORYNAME_KICKING,
        .height = 15,
        .weight = 498,
        .description = gHitmonleePokedexText,
		.pokedexShowEntry = gHitmonleePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_HITMONCHAN] =
    {
        .categoryName = CATEGORYNAME_PUNCHING,
        .height = 14,
        .weight = 502,
        .description = gHitmonchanPokedexText,
		.pokedexShowEntry = gHitmonchanPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LICKITUNG] =
    {
        .categoryName = CATEGORYNAME_LICKING,
        .height = 12,
        .weight = 655,
        .description = gLickitungPokedexText,
		.pokedexShowEntry = gLickitungPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOFFING] =
    {
        .categoryName = CATEGORYNAME_POISON_GAS,
        .height = 6,
        .weight = 10,
        .description = gKoffingPokedexText,
		.pokedexShowEntry = gKoffingPokedexShowText,
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEZING] =
    {
        .categoryName = CATEGORYNAME_POISON_GAS,
        .height = 12,
        .weight = 95,
        .description = gWeezingPokedexText,
		.pokedexShowEntry = gWeezingPokedexShowText,
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYHORN] =
    {
        .categoryName = CATEGORYNAME_SPIKES,
        .height = 10,
        .weight = 1150,
        .description = gRhyhornPokedexText,
		.pokedexShowEntry = gRhyhornPokedexShowText,
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYDON] =
    {
        .categoryName = CATEGORYNAME_DRILL,
        .height = 19,
        .weight = 1200,
        .description = gRhydonPokedexText,
		.pokedexShowEntry = gRhydonPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHANSEY] =
    {
        .categoryName = CATEGORYNAME_EGG,
        .height = 11,
        .weight = 346,
        .description = gChanseyPokedexText,
		.pokedexShowEntry = gChanseyPokedexShowText,
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TANGELA] =
    {
        .categoryName = CATEGORYNAME_VINE,
        .height = 10,
        .weight = 350,
        .description = gTangelaPokedexText,
		.pokedexShowEntry = gTangelaPokedexShowText,
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KANGASKHAN] =
    {
        .categoryName = CATEGORYNAME_PARENT,
        .height = 22,
        .weight = 800,
        .description = gKangaskhanPokedexText,
		.pokedexShowEntry = gKangaskhanPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_HORSEA] =
    {
        .categoryName = CATEGORYNAME_DRAGON,
        .height = 4,
        .weight = 80,
        .description = gHorseaPokedexText,
		.pokedexShowEntry = gHorseaPokedexShowText,
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEADRA] =
    {
        .categoryName = CATEGORYNAME_DRAGON,
        .height = 12,
        .weight = 250,
        .description = gSeadraPokedexText,
		.pokedexShowEntry = gSeadraPokedexShowText,
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLDEEN] =
    {
        .categoryName = CATEGORYNAME_GOLDFISH,
        .height = 6,
        .weight = 150,
        .description = gGoldeenPokedexText,
		.pokedexShowEntry = gGoldeenPokedexShowText,
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEAKING] =
    {
        .categoryName = CATEGORYNAME_GOLDFISH,
        .height = 13,
        .weight = 390,
        .description = gSeakingPokedexText,
		.pokedexShowEntry = gSeakingPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARYU] =
    {
        .categoryName = CATEGORYNAME_STAR_SHAPE,
        .height = 8,
        .weight = 345,
        .description = gStaryuPokedexText,
		.pokedexShowEntry = gStaryuPokedexShowText,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARMIE] =
    {
        .categoryName = CATEGORYNAME_MYSTERIOUS,
        .height = 11,
        .weight = 800,
        .description = gStarmiePokedexText,
		.pokedexShowEntry = gStarmiePokedexShowText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MR_MIME] =
    {
        .categoryName = CATEGORYNAME_BARRIER,
        .height = 13,
        .weight = 545,
        .description = gMrmimePokedexText,
		.pokedexShowEntry = gMrmimePokedexShowText,
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCYTHER] =
    {
        .categoryName = CATEGORYNAME_MANTIS,
        .height = 15,
        .weight = 560,
        .description = gScytherPokedexText,
		.pokedexShowEntry = gScytherPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_JYNX] =
    {
        .categoryName = CATEGORYNAME_HUMAN_SHAPE,
        .height = 14,
        .weight = 406,
        .description = gJynxPokedexText,
		.pokedexShowEntry = gJynxPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ELECTABUZZ] =
    {
        .categoryName = CATEGORYNAME_ELECTRIC,
        .height = 11,
        .weight = 300,
        .description = gElectabuzzPokedexText,
		.pokedexShowEntry = gElectabuzzPokedexShowText,
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGMAR] =
    {
        .categoryName = CATEGORYNAME_SPITFIRE,
        .height = 13,
        .weight = 445,
        .description = gMagmarPokedexText,
		.pokedexShowEntry = gMagmarPokedexShowText,
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINSIR] =
    {
        .categoryName = CATEGORYNAME_STAG_BEETLE,
        .height = 15,
        .weight = 550,
        .description = gPinsirPokedexText,
		.pokedexShowEntry = gPinsirPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAUROS] =
    {
        .categoryName = CATEGORYNAME_WILD_BULL,
        .height = 14,
        .weight = 884,
        .description = gTaurosPokedexText,
		.pokedexShowEntry = gTaurosPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGIKARP] =
    {
        .categoryName = CATEGORYNAME_FISH,
        .height = 9,
        .weight = 100,
        .description = gMagikarpPokedexText,
		.pokedexShowEntry = gMagikarpPokedexShowText,
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GYARADOS] =
    {
        .categoryName = CATEGORYNAME_ATROCIOUS,
        .height = 65,
        .weight = 2350,
        .description = gGyaradosPokedexText,
		.pokedexShowEntry = gGyaradosPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_LAPRAS] =
    {
        .categoryName = CATEGORYNAME_TRANSPORT,
        .height = 25,
        .weight = 2200,
        .description = gLaprasPokedexText,
		.pokedexShowEntry = gLaprasPokedexShowText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DITTO] =
    {
        .categoryName = CATEGORYNAME_TRANSFORM,
        .height = 3,
        .weight = 40,
        .description = gDittoPokedexText,
		.pokedexShowEntry = gDittoPokedexShowText,
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EEVEE] =
    {
        .categoryName = CATEGORYNAME_EVOLUTION,
        .height = 3,
        .weight = 65,
        .description = gEeveePokedexText,
		.pokedexShowEntry = gEeveePokedexShowText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VAPOREON] =
    {
        .categoryName = CATEGORYNAME_BUBBLE_JET,
        .height = 10,
        .weight = 290,
        .description = gVaporeonPokedexText,
		.pokedexShowEntry = gVaporeonPokedexShowText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOLTEON] =
    {
        .categoryName = CATEGORYNAME_LIGHTNING,
        .height = 8,
        .weight = 245,
        .description = gJolteonPokedexText,
		.pokedexShowEntry = gJolteonPokedexShowText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAREON] =
    {
        .categoryName = CATEGORYNAME_FLAME,
        .height = 9,
        .weight = 250,
        .description = gFlareonPokedexText,
		.pokedexShowEntry = gFlareonPokedexShowText,
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON] =
    {
        .categoryName = CATEGORYNAME_VIRTUAL,
        .height = 8,
        .weight = 365,
        .description = gPorygonPokedexText,
		.pokedexShowEntry = gPorygonPokedexShowText,
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OMANYTE] =
    {
        .categoryName = CATEGORYNAME_SPIRAL,
        .height = 4,
        .weight = 75,
        .description = gOmanytePokedexText,
		.pokedexShowEntry = gOmanytePokedexShowText,
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OMASTAR] =
    {
        .categoryName = CATEGORYNAME_SPIRAL,
        .height = 10,
        .weight = 350,
        .description = gOmastarPokedexText,
		.pokedexShowEntry = gOmastarPokedexShowText,
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KABUTO] =
    {
        .categoryName = CATEGORYNAME_SHELLFISH,
        .height = 5,
        .weight = 115,
        .description = gKabutoPokedexText,
		.pokedexShowEntry = gKabutoPokedexShowText,
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KABUTOPS] =
    {
        .categoryName = CATEGORYNAME_SHELLFISH,
        .height = 13,
        .weight = 405,
        .description = gKabutopsPokedexText,
		.pokedexShowEntry = gKabutopsPokedexShowText,
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AERODACTYL] =
    {
        .categoryName = CATEGORYNAME_FOSSIL,
        .height = 18,
        .weight = 590,
        .description = gAerodactylPokedexText,
		.pokedexShowEntry = gAerodactylPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_SNORLAX] =
    {
        .categoryName = CATEGORYNAME_SLEEPING,
        .height = 21,
        .weight = 4600,
        .description = gSnorlaxPokedexText,
		.pokedexShowEntry = gSnorlaxPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
    },

    [NATIONAL_DEX_ARTICUNO] =
    {
        .categoryName = CATEGORYNAME_FREEZE,
        .height = 17,
        .weight = 554,
        .description = gArticunoPokedexText,
		.pokedexShowEntry = gArticunoPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ZAPDOS] =
    {
        .categoryName = CATEGORYNAME_ELECTRIC,
        .height = 16,
        .weight = 526,
        .description = gZapdosPokedexText,
		.pokedexShowEntry = gZapdosPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_MOLTRES] =
    {
        .categoryName = CATEGORYNAME_FLAME,
        .height = 20,
        .weight = 600,
        .description = gMoltresPokedexText,
		.pokedexShowEntry = gMoltresPokedexShowText,
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DRATINI] =
    {
        .categoryName = CATEGORYNAME_DRAGON,
        .height = 18,
        .weight = 33,
        .description = gDratiniPokedexText,
		.pokedexShowEntry = gDratiniPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_DRAGONAIR] =
    {
        .categoryName = CATEGORYNAME_DRAGON,
        .height = 40,
        .weight = 165,
        .description = gDragonairPokedexText,
		.pokedexShowEntry = gDragonairPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_DRAGONITE] =
    {
        .categoryName = CATEGORYNAME_DRAGON,
        .height = 22,
        .weight = 2100,
        .description = gDragonitePokedexText,
		.pokedexShowEntry = gDragonitePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MEWTWO] =
    {
        .categoryName = CATEGORYNAME_GENETIC,
        .height = 20,
        .weight = 1220,
        .description = gMewtwoPokedexText,
		.pokedexShowEntry = gMewtwoPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MEW] =
    {
        .categoryName = CATEGORYNAME_NEW_SPECIES,
        .height = 4,
        .weight = 40,
        .description = gMewPokedexText,
		.pokedexShowEntry = gMewPokedexShowText,
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHIKORITA] =
    {
        .categoryName = CATEGORYNAME_LEAF,
        .height = 9,
        .weight = 64,
        .description = gChikoritaPokedexText,
		.pokedexShowEntry = gChikoritaPokedexShowText,
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAYLEEF] =
    {
        .categoryName = CATEGORYNAME_LEAF,
        .height = 12,
        .weight = 158,
        .description = gBayleefPokedexText,
		.pokedexShowEntry = gBayleefPokedexShowText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEGANIUM] =
    {
        .categoryName = CATEGORYNAME_HERB,
        .height = 18,
        .weight = 1005,
        .description = gMeganiumPokedexText,
		.pokedexShowEntry = gMeganiumPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CYNDAQUIL] =
    {
        .categoryName = CATEGORYNAME_FIRE_MOUSE,
        .height = 5,
        .weight = 79,
        .description = gCyndaquilPokedexText,
		.pokedexShowEntry = gCyndaquilPokedexShowText,
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUILAVA] =
    {
        .categoryName = CATEGORYNAME_VOLCANO,
        .height = 9,
        .weight = 190,
        .description = gQuilavaPokedexText,
		.pokedexShowEntry = gQuilavaPokedexShowText,
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYPHLOSION] =
    {
        .categoryName = CATEGORYNAME_VOLCANO,
        .height = 17,
        .weight = 795,
        .description = gTyphlosionPokedexText,
		.pokedexShowEntry = gTyphlosionPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TOTODILE] =
    {
        .categoryName = CATEGORYNAME_BIG_JAW,
        .height = 6,
        .weight = 95,
        .description = gTotodilePokedexText,
		.pokedexShowEntry = gTotodilePokedexShowText,
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CROCONAW] =
    {
        .categoryName = CATEGORYNAME_BIG_JAW,
        .height = 11,
        .weight = 250,
        .description = gCroconawPokedexText,
		.pokedexShowEntry = gCroconawPokedexShowText,
        .pokemonScale = 378,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERALIGATR] =
    {
        .categoryName = CATEGORYNAME_BIG_JAW,
        .height = 23,
        .weight = 888,
        .description = gFeraligatrPokedexText,
		.pokedexShowEntry = gFeraligatrPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SENTRET] =
    {
        .categoryName = CATEGORYNAME_SCOUT,
        .height = 8,
        .weight = 60,
        .description = gSentretPokedexText,
		.pokedexShowEntry = gSentretPokedexShowText,
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FURRET] =
    {
        .categoryName = CATEGORYNAME_LONG_BODY,
        .height = 18,
        .weight = 325,
        .description = gFurretPokedexText,
		.pokedexShowEntry = gFurretPokedexShowText,
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOOTHOOT] =
    {
        .categoryName = CATEGORYNAME_OWL,
        .height = 7,
        .weight = 212,
        .description = gHoothootPokedexText,
		.pokedexShowEntry = gHoothootPokedexShowText,
        .pokemonScale = 380,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOCTOWL] =
    {
        .categoryName = CATEGORYNAME_OWL,
        .height = 16,
        .weight = 408,
        .description = gNoctowlPokedexText,
		.pokedexShowEntry = gNoctowlPokedexShowText,
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEDYBA] =
    {
        .categoryName = CATEGORYNAME_FIVE_STAR,
        .height = 10,
        .weight = 108,
        .description = gLedybaPokedexText,
		.pokedexShowEntry = gLedybaPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEDIAN] =
    {
        .categoryName = CATEGORYNAME_FIVE_STAR,
        .height = 14,
        .weight = 356,
        .description = gLedianPokedexText,
		.pokedexShowEntry = gLedianPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPINARAK] =
    {
        .categoryName = CATEGORYNAME_STRING_SPIT,
        .height = 5,
        .weight = 85,
        .description = gSpinarakPokedexText,
		.pokedexShowEntry = gSpinarakPokedexShowText,
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARIADOS] =
    {
        .categoryName = CATEGORYNAME_LONG_LEG,
        .height = 11,
        .weight = 335,
        .description = gAriadosPokedexText,
		.pokedexShowEntry = gAriadosPokedexShowText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CROBAT] =
    {
        .categoryName = CATEGORYNAME_BAT,
        .height = 18,
        .weight = 750,
        .description = gCrobatPokedexText,
		.pokedexShowEntry = gCrobatPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CHINCHOU] =
    {
        .categoryName = CATEGORYNAME_ANGLER,
        .height = 5,
        .weight = 120,
        .description = gChinchouPokedexText,
		.pokedexShowEntry = gChinchouPokedexShowText,
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LANTURN] =
    {
        .categoryName = CATEGORYNAME_LIGHT,
        .height = 12,
        .weight = 225,
        .description = gLanturnPokedexText,
		.pokedexShowEntry = gLanturnPokedexShowText,
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PICHU] =
    {
        .categoryName = CATEGORYNAME_TINY_MOUSE,
        .height = 3,
        .weight = 20,
        .description = gPichuPokedexText,
		.pokedexShowEntry = gPichuPokedexShowText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFFA] =
    {
        .categoryName = CATEGORYNAME_STAR_SHAPE,
        .height = 3,
        .weight = 30,
        .description = gCleffaPokedexText,
		.pokedexShowEntry = gCleffaPokedexShowText,
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IGGLYBUFF] =
    {
        .categoryName = CATEGORYNAME_BALLOON,
        .height = 3,
        .weight = 10,
        .description = gIgglybuffPokedexText,
		.pokedexShowEntry = gIgglybuffPokedexShowText,
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGEPI] =
    {
        .categoryName = CATEGORYNAME_SPIKE_BALL,
        .height = 3,
        .weight = 15,
        .description = gTogepiPokedexText,
		.pokedexShowEntry = gTogepiPokedexShowText,
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGETIC] =
    {
        .categoryName = CATEGORYNAME_HAPPINESS,
        .height = 6,
        .weight = 32,
        .description = gTogeticPokedexText,
		.pokedexShowEntry = gTogeticPokedexShowText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NATU] =
    {
        .categoryName = CATEGORYNAME_TINY_BIRD,
        .height = 2,
        .weight = 20,
        .description = gNatuPokedexText,
		.pokedexShowEntry = gNatuPokedexShowText,
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XATU] =
    {
        .categoryName = CATEGORYNAME_MYSTIC,
        .height = 15,
        .weight = 150,
        .description = gXatuPokedexText,
		.pokedexShowEntry = gXatuPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MAREEP] =
    {
        .categoryName = CATEGORYNAME_WOOL,
        .height = 6,
        .weight = 78,
        .description = gMareepPokedexText,
		.pokedexShowEntry = gMareepPokedexShowText,
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAAFFY] =
    {
        .categoryName = CATEGORYNAME_WOOL,
        .height = 8,
        .weight = 133,
        .description = gFlaaffyPokedexText,
		.pokedexShowEntry = gFlaaffyPokedexShowText,
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMPHAROS] =
    {
        .categoryName = CATEGORYNAME_LIGHT,
        .height = 14,
        .weight = 615,
        .description = gAmpharosPokedexText,
		.pokedexShowEntry = gAmpharosPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELLOSSOM] =
    {
        .categoryName = CATEGORYNAME_FLOWER,
        .height = 4,
        .weight = 58,
        .description = gBellossomPokedexText,
		.pokedexShowEntry = gBellossomPokedexShowText,
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARILL] =
    {
        .categoryName = CATEGORYNAME_AQUA_MOUSE,
        .height = 4,
        .weight = 85,
        .description = gMarillPokedexText,
		.pokedexShowEntry = gMarillPokedexShowText,
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AZUMARILL] =
    {
        .categoryName = CATEGORYNAME_AQUA_RABBIT,
        .height = 8,
        .weight = 285,
        .description = gAzumarillPokedexText,
		.pokedexShowEntry = gAzumarillPokedexShowText,
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUDOWOODO] =
    {
        .categoryName = CATEGORYNAME_IMITATION,
        .height = 12,
        .weight = 380,
        .description = gSudowoodoPokedexText,
		.pokedexShowEntry = gSudowoodoPokedexShowText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLITOED] =
    {
        .categoryName = CATEGORYNAME_FROG,
        .height = 11,
        .weight = 339,
        .description = gPolitoedPokedexText,
		.pokedexShowEntry = gPolitoedPokedexShowText,
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOPPIP] =
    {
        .categoryName = CATEGORYNAME_COTTONWEED,
        .height = 4,
        .weight = 5,
        .description = gHoppipPokedexText,
		.pokedexShowEntry = gHoppipPokedexShowText,
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKIPLOOM] =
    {
        .categoryName = CATEGORYNAME_COTTONWEED,
        .height = 6,
        .weight = 10,
        .description = gSkiploomPokedexText,
		.pokedexShowEntry = gSkiploomPokedexShowText,
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JUMPLUFF] =
    {
        .categoryName = CATEGORYNAME_COTTONWEED,
        .height = 8,
        .weight = 30,
        .description = gJumpluffPokedexText,
		.pokedexShowEntry = gJumpluffPokedexShowText,
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AIPOM] =
    {
        .categoryName = CATEGORYNAME_LONG_TAIL,
        .height = 8,
        .weight = 115,
        .description = gAipomPokedexText,
		.pokedexShowEntry = gAipomPokedexShowText,
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNKERN] =
    {
        .categoryName = CATEGORYNAME_SEED,
        .height = 3,
        .weight = 18,
        .description = gSunkernPokedexText,
		.pokedexShowEntry = gSunkernPokedexShowText,
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNFLORA] =
    {
        .categoryName = CATEGORYNAME_SUN,
        .height = 8,
        .weight = 85,
        .description = gSunfloraPokedexText,
		.pokedexShowEntry = gSunfloraPokedexShowText,
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YANMA] =
    {
        .categoryName = CATEGORYNAME_CLEAR_WING,
        .height = 12,
        .weight = 380,
        .description = gYanmaPokedexText,
		.pokedexShowEntry = gYanmaPokedexShowText,
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOPER] =
    {
        .categoryName = CATEGORYNAME_WATER_FISH,
        .height = 4,
        .weight = 85,
        .description = gWooperPokedexText,
		.pokedexShowEntry = gWooperPokedexShowText,
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUAGSIRE] =
    {
        .categoryName = CATEGORYNAME_WATER_FISH,
        .height = 14,
        .weight = 750,
        .description = gQuagsirePokedexText,
		.pokedexShowEntry = gQuagsirePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESPEON] =
    {
        .categoryName = CATEGORYNAME_SUN,
        .height = 9,
        .weight = 265,
        .description = gEspeonPokedexText,
		.pokedexShowEntry = gEspeonPokedexShowText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UMBREON] =
    {
        .categoryName = CATEGORYNAME_MOONLIGHT,
        .height = 10,
        .weight = 270,
        .description = gUmbreonPokedexText,
		.pokedexShowEntry = gUmbreonPokedexShowText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MURKROW] =
    {
        .categoryName = CATEGORYNAME_DARKNESS,
        .height = 5,
        .weight = 21,
        .description = gMurkrowPokedexText,
		.pokedexShowEntry = gMurkrowPokedexShowText,
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SLOWKING] =
    {
        .categoryName = CATEGORYNAME_ROYAL,
        .height = 20,
        .weight = 795,
        .description = gSlowkingPokedexText,
		.pokedexShowEntry = gSlowkingPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_MISDREAVUS] =
    {
        .categoryName = CATEGORYNAME_SCREECH,
        .height = 7,
        .weight = 10,
        .description = gMisdreavusPokedexText,
		.pokedexShowEntry = gMisdreavusPokedexShowText,
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNOWN] =
    {
        .categoryName = CATEGORYNAME_SYMBOL,
        .height = 5,
        .weight = 50,
        .description = gUnownPokedexText,
		.pokedexShowEntry = gUnownPokedexShowText,
        .pokemonScale = 411,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOBBUFFET] =
    {
        .categoryName = CATEGORYNAME_PATIENT,
        .height = 13,
        .weight = 285,
        .description = gWobbuffetPokedexText,
		.pokedexShowEntry = gWobbuffetPokedexShowText,
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIRAFARIG] =
    {
        .categoryName = CATEGORYNAME_LONG_NECK,
        .height = 15,
        .weight = 415,
        .description = gGirafarigPokedexText,
		.pokedexShowEntry = gGirafarigPokedexShowText,
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINECO] =
    {
        .categoryName = CATEGORYNAME_BAGWORM,
        .height = 6,
        .weight = 72,
        .description = gPinecoPokedexText,
		.pokedexShowEntry = gPinecoPokedexShowText,
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FORRETRESS] =
    {
        .categoryName = CATEGORYNAME_BAGWORM,
        .height = 12,
        .weight = 1258,
        .description = gForretressPokedexText,
		.pokedexShowEntry = gForretressPokedexShowText,
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUNSPARCE] =
    {
        .categoryName = CATEGORYNAME_LAND_SNAKE,
        .height = 15,
        .weight = 140,
        .description = gDunsparcePokedexText,
		.pokedexShowEntry = gDunsparcePokedexShowText,
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLIGAR] =
    {
        .categoryName = CATEGORYNAME_FLYSCORPION,
        .height = 11,
        .weight = 648,
        .description = gGligarPokedexText,
		.pokedexShowEntry = gGligarPokedexShowText,
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STEELIX] =
    {
        .categoryName = CATEGORYNAME_IRON_SNAKE,
        .height = 92,
        .weight = 4000,
        .description = gSteelixPokedexText,
		.pokedexShowEntry = gSteelixPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_SNUBBULL] =
    {
        .categoryName = CATEGORYNAME_FAIRY,
        .height = 6,
        .weight = 78,
        .description = gSnubbullPokedexText,
		.pokedexShowEntry = gSnubbullPokedexShowText,
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRANBULL] =
    {
        .categoryName = CATEGORYNAME_FAIRY,
        .height = 14,
        .weight = 487,
        .description = gGranbullPokedexText,
		.pokedexShowEntry = gGranbullPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QWILFISH] =
    {
        .categoryName = CATEGORYNAME_BALLOON,
        .height = 5,
        .weight = 39,
        .description = gQwilfishPokedexText,
		.pokedexShowEntry = gQwilfishPokedexShowText,
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCIZOR] =
    {
        .categoryName = CATEGORYNAME_PINCER,
        .height = 18,
        .weight = 1180,
        .description = gScizorPokedexText,
		.pokedexShowEntry = gScizorPokedexShowText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUCKLE] =
    {
        .categoryName = CATEGORYNAME_MOLD,
        .height = 6,
        .weight = 205,
        .description = gShucklePokedexText,
		.pokedexShowEntry = gShucklePokedexShowText,
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HERACROSS] =
    {
        .categoryName = CATEGORYNAME_SINGLE_HORN,
        .height = 15,
        .weight = 540,
        .description = gHeracrossPokedexText,
		.pokedexShowEntry = gHeracrossPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNEASEL] =
    {
        .categoryName = CATEGORYNAME_SHARP_CLAW,
        .height = 9,
        .weight = 280,
        .description = gSneaselPokedexText,
		.pokedexShowEntry = gSneaselPokedexShowText,
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TEDDIURSA] =
    {
        .categoryName = CATEGORYNAME_LITTLE_BEAR,
        .height = 6,
        .weight = 88,
        .description = gTeddiursaPokedexText,
		.pokedexShowEntry = gTeddiursaPokedexShowText,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_URSARING] =
    {
        .categoryName = CATEGORYNAME_HIBERNATOR,
        .height = 18,
        .weight = 1258,
        .description = gUrsaringPokedexText,
		.pokedexShowEntry = gUrsaringPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLUGMA] =
    {
        .categoryName = CATEGORYNAME_LAVA,
        .height = 7,
        .weight = 350,
        .description = gSlugmaPokedexText,
		.pokedexShowEntry = gSlugmaPokedexShowText,
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGCARGO] =
    {
        .categoryName = CATEGORYNAME_LAVA,
        .height = 8,
        .weight = 550,
        .description = gMagcargoPokedexText,
		.pokedexShowEntry = gMagcargoPokedexShowText,
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWINUB] =
    {
        .categoryName = CATEGORYNAME_PIG,
        .height = 4,
        .weight = 65,
        .description = gSwinubPokedexText,
		.pokedexShowEntry = gSwinubPokedexShowText,
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PILOSWINE] =
    {
        .categoryName = CATEGORYNAME_SWINE,
        .height = 11,
        .weight = 558,
        .description = gPiloswinePokedexText,
		.pokedexShowEntry = gPiloswinePokedexShowText,
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORSOLA] =
    {
        .categoryName = CATEGORYNAME_CORAL,
        .height = 6,
        .weight = 50,
        .description = gCorsolaPokedexText,
		.pokedexShowEntry = gCorsolaPokedexShowText,
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REMORAID] =
    {
        .categoryName = CATEGORYNAME_JET,
        .height = 6,
        .weight = 120,
        .description = gRemoraidPokedexText,
		.pokedexShowEntry = gRemoraidPokedexShowText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OCTILLERY] =
    {
        .categoryName = CATEGORYNAME_JET,
        .height = 9,
        .weight = 285,
        .description = gOctilleryPokedexText,
		.pokedexShowEntry = gOctilleryPokedexShowText,
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELIBIRD] =
    {
        .categoryName = CATEGORYNAME_DELIVERY,
        .height = 9,
        .weight = 160,
        .description = gDelibirdPokedexText,
		.pokedexShowEntry = gDelibirdPokedexShowText,
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANTINE] =
    {
        .categoryName = CATEGORYNAME_KITE,
        .height = 21,
        .weight = 2200,
        .description = gMantinePokedexText,
		.pokedexShowEntry = gMantinePokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SKARMORY] =
    {
        .categoryName = CATEGORYNAME_ARMOR_BIRD,
        .height = 17,
        .weight = 505,
        .description = gSkarmoryPokedexText,
		.pokedexShowEntry = gSkarmoryPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_HOUNDOUR] =
    {
        .categoryName = CATEGORYNAME_DARK,
        .height = 6,
        .weight = 108,
        .description = gHoundourPokedexText,
		.pokedexShowEntry = gHoundourPokedexShowText,
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOUNDOOM] =
    {
        .categoryName = CATEGORYNAME_DARK,
        .height = 14,
        .weight = 350,
        .description = gHoundoomPokedexText,
		.pokedexShowEntry = gHoundoomPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KINGDRA] =
    {
        .categoryName = CATEGORYNAME_DRAGON,
        .height = 18,
        .weight = 1520,
        .description = gKingdraPokedexText,
		.pokedexShowEntry = gKingdraPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHANPY] =
    {
        .categoryName = CATEGORYNAME_LONG_NOSE,
        .height = 5,
        .weight = 335,
        .description = gPhanpyPokedexText,
		.pokedexShowEntry = gPhanpyPokedexShowText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DONPHAN] =
    {
        .categoryName = CATEGORYNAME_ARMOR,
        .height = 11,
        .weight = 1200,
        .description = gDonphanPokedexText,
		.pokedexShowEntry = gDonphanPokedexShowText,
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON2] =
    {
        .categoryName = CATEGORYNAME_VIRTUAL,
        .height = 6,
        .weight = 325,
        .description = gPorygon2PokedexText,
		.pokedexShowEntry = gPorygon2PokedexShowText,
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STANTLER] =
    {
        .categoryName = CATEGORYNAME_BIG_HORN,
        .height = 14,
        .weight = 712,
        .description = gStantlerPokedexText,
		.pokedexShowEntry = gStantlerPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMEARGLE] =
    {
        .categoryName = CATEGORYNAME_PAINTER,
        .height = 12,
        .weight = 580,
        .description = gSmearglePokedexText,
		.pokedexShowEntry = gSmearglePokedexShowText,
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYROGUE] =
    {
        .categoryName = CATEGORYNAME_SCUFFLE,
        .height = 7,
        .weight = 210,
        .description = gTyroguePokedexText,
		.pokedexShowEntry = gTyroguePokedexShowText,
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HITMONTOP] =
    {
        .categoryName = CATEGORYNAME_HANDSTAND,
        .height = 14,
        .weight = 480,
        .description = gHitmontopPokedexText,
		.pokedexShowEntry = gHitmontopPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMOOCHUM] =
    {
        .categoryName = CATEGORYNAME_KISS,
        .height = 4,
        .weight = 60,
        .description = gSmoochumPokedexText,
		.pokedexShowEntry = gSmoochumPokedexShowText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELEKID] =
    {
        .categoryName = CATEGORYNAME_ELECTRIC,
        .height = 6,
        .weight = 235,
        .description = gElekidPokedexText,
		.pokedexShowEntry = gElekidPokedexShowText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGBY] =
    {
        .categoryName = CATEGORYNAME_LIVE_COAL,
        .height = 7,
        .weight = 214,
        .description = gMagbyPokedexText,
		.pokedexShowEntry = gMagbyPokedexShowText,
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILTANK] =
    {
        .categoryName = CATEGORYNAME_MILK_COW,
        .height = 12,
        .weight = 755,
        .description = gMiltankPokedexText,
		.pokedexShowEntry = gMiltankPokedexShowText,
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLISSEY] =
    {
        .categoryName = CATEGORYNAME_HAPPINESS,
        .height = 15,
        .weight = 468,
        .description = gBlisseyPokedexText,
		.pokedexShowEntry = gBlisseyPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_RAIKOU] =
    {
        .categoryName = CATEGORYNAME_THUNDER,
        .height = 19,
        .weight = 1780,
        .description = gRaikouPokedexText,
		.pokedexShowEntry = gRaikouPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_ENTEI] =
    {
        .categoryName = CATEGORYNAME_VOLCANO,
        .height = 21,
        .weight = 1980,
        .description = gEnteiPokedexText,
		.pokedexShowEntry = gEnteiPokedexShowText,
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SUICUNE] =
    {
        .categoryName = CATEGORYNAME_AURORA,
        .height = 20,
        .weight = 1870,
        .description = gSuicunePokedexText,
		.pokedexShowEntry = gSuicunePokedexShowText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LARVITAR] =
    {
        .categoryName = CATEGORYNAME_ROCK_SKIN,
        .height = 6,
        .weight = 720,
        .description = gLarvitarPokedexText,
		.pokedexShowEntry = gLarvitarPokedexShowText,
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUPITAR] =
    {
        .categoryName = CATEGORYNAME_HARD_SHELL,
        .height = 12,
        .weight = 1520,
        .description = gPupitarPokedexText,
		.pokedexShowEntry = gPupitarPokedexShowText,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRANITAR] =
    {
        .categoryName = CATEGORYNAME_ARMOR,
        .height = 20,
        .weight = 2020,
        .description = gTyranitarPokedexText,
		.pokedexShowEntry = gTyranitarPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LUGIA] =
    {
        .categoryName = CATEGORYNAME_DIVING,
        .height = 52,
        .weight = 2160,
        .description = gLugiaPokedexText,
		.pokedexShowEntry = gLugiaPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [NATIONAL_DEX_HO_OH] =
    {
        .categoryName = CATEGORYNAME_RAINBOW,
        .height = 38,
        .weight = 1990,
        .description = gHoOhPokedexText,
		.pokedexShowEntry = gHoOhPokedexShowText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },

    [NATIONAL_DEX_CELEBI] =
    {
        .categoryName = CATEGORYNAME_TIME_TRAVEL,
        .height = 6,
        .weight = 50,
        .description = gCelebiPokedexText,
		.pokedexShowEntry = gCelebiPokedexShowText,
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TREECKO] =
    {
        .categoryName = CATEGORYNAME_WOOD_GECKO,
        .height = 5,
        .weight = 50,
        .description = gTreeckoPokedexText,
		.pokedexShowEntry = gTreeckoPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROVYLE] =
    {
        .categoryName = CATEGORYNAME_WOOD_GECKO,
        .height = 9,
        .weight = 216,
        .description = gGrovylePokedexText,
		.pokedexShowEntry = gGrovylePokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCEPTILE] =
    {
        .categoryName = CATEGORYNAME_FOREST,
        .height = 17,
        .weight = 522,
        .description = gSceptilePokedexText,
		.pokedexShowEntry = gSceptilePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TORCHIC] =
    {
        .categoryName = CATEGORYNAME_CHICK,
        .height = 4,
        .weight = 25,
        .description = gTorchicPokedexText,
		.pokedexShowEntry = gTorchicPokedexText,
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMBUSKEN] =
    {
        .categoryName = CATEGORYNAME_YOUNG_FOWL,
        .height = 9,
        .weight = 195,
        .description = gCombuskenPokedexText,
		.pokedexShowEntry = gCombuskenPokedexText,
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLAZIKEN] =
    {
        .categoryName = CATEGORYNAME_BLAZE,
        .height = 19,
        .weight = 520,
        .description = gBlazikenPokedexText,
		.pokedexShowEntry = gBlazikenPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MUDKIP] =
    {
        .categoryName = CATEGORYNAME_MUD_FISH,
        .height = 4,
        .weight = 76,
        .description = gMudkipPokedexText,
		.pokedexShowEntry = gMudkipPokedexText,
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARSHTOMP] =
    {
        .categoryName = CATEGORYNAME_MUD_FISH,
        .height = 7,
        .weight = 280,
        .description = gMarshtompPokedexText,
		.pokedexShowEntry = gMarshtompPokedexText,
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWAMPERT] =
    {
        .categoryName = CATEGORYNAME_MUD_FISH,
        .height = 15,
        .weight = 819,
        .description = gSwampertPokedexText,
		.pokedexShowEntry = gSwampertPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POOCHYENA] =
    {
        .categoryName = CATEGORYNAME_BITE,
        .height = 5,
        .weight = 136,
        .description = gPoochyenaPokedexText,
		.pokedexShowEntry = gPoochyenaPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIGHTYENA] =
    {
        .categoryName = CATEGORYNAME_BITE,
        .height = 10,
        .weight = 370,
        .description = gMightyenaPokedexText,
		.pokedexShowEntry = gMightyenaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZIGZAGOON] =
    {
        .categoryName = CATEGORYNAME_TINYRACCOON,
        .height = 4,
        .weight = 175,
        .description = gZigzagoonPokedexText,
		.pokedexShowEntry = gZigzagoonPokedexText,
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LINOONE] =
    {
        .categoryName = CATEGORYNAME_RUSHING,
        .height = 5,
        .weight = 325,
        .description = gLinoonePokedexText,
		.pokedexShowEntry = gLinoonePokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WURMPLE] =
    {
        .categoryName = CATEGORYNAME_WORM,
        .height = 3,
        .weight = 36,
        .description = gWurmplePokedexText,
		.pokedexShowEntry = gWurmplePokedexText,
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILCOON] =
    {
        .categoryName = CATEGORYNAME_COCOON,
        .height = 6,
        .weight = 100,
        .description = gSilcoonPokedexText,
		.pokedexShowEntry = gSilcoonPokedexText,
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEAUTIFLY] =
    {
        .categoryName = CATEGORYNAME_BUTTERFLY,
        .height = 10,
        .weight = 284,
        .description = gBeautiflyPokedexText,
		.pokedexShowEntry = gBeautiflyPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CASCOON] =
    {
        .categoryName = CATEGORYNAME_COCOON,
        .height = 7,
        .weight = 115,
        .description = gCascoonPokedexText,
		.pokedexShowEntry = gCascoonPokedexText,
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSTOX] =
    {
        .categoryName = CATEGORYNAME_POISON_MOTH,
        .height = 12,
        .weight = 316,
        .description = gDustoxPokedexText,
		.pokedexShowEntry = gDustoxPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOTAD] =
    {
        .categoryName = CATEGORYNAME_WATER_WEED,
        .height = 5,
        .weight = 26,
        .description = gLotadPokedexText,
		.pokedexShowEntry = gLotadPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOMBRE] =
    {
        .categoryName = CATEGORYNAME_JOLLY,
        .height = 12,
        .weight = 325,
        .description = gLombrePokedexText,
		.pokedexShowEntry = gLombrePokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUDICOLO] =
    {
        .categoryName = CATEGORYNAME_CAREFREE,
        .height = 15,
        .weight = 550,
        .description = gLudicoloPokedexText,
		.pokedexShowEntry = gLudicoloPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_SEEDOT] =
    {
        .categoryName = CATEGORYNAME_ACORN,
        .height = 5,
        .weight = 40,
        .description = gSeedotPokedexText,
		.pokedexShowEntry = gSeedotPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUZLEAF] =
    {
        .categoryName = CATEGORYNAME_WILY,
        .height = 10,
        .weight = 280,
        .description = gNuzleafPokedexText,
		.pokedexShowEntry = gNuzleafPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHIFTRY] =
    {
        .categoryName = CATEGORYNAME_WICKED,
        .height = 13,
        .weight = 596,
        .description = gShiftryPokedexText,
		.pokedexShowEntry = gShiftryPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAILLOW] =
    {
        .categoryName = CATEGORYNAME_TINYSWALLOW,
        .height = 3,
        .weight = 23,
        .description = gTaillowPokedexText,
		.pokedexShowEntry = gTaillowPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWELLOW] =
    {
        .categoryName = CATEGORYNAME_SWALLOW,
        .height = 7,
        .weight = 198,
        .description = gSwellowPokedexText,
		.pokedexShowEntry = gSwellowPokedexText,
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WINGULL] =
    {
        .categoryName = CATEGORYNAME_SEAGULL,
        .height = 6,
        .weight = 95,
        .description = gWingullPokedexText,
		.pokedexShowEntry = gWingullPokedexText,
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PELIPPER] =
    {
        .categoryName = CATEGORYNAME_WATER_BIRD,
        .height = 12,
        .weight = 280,
        .description = gPelipperPokedexText,
		.pokedexShowEntry = gPelipperPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RALTS] =
    {
        .categoryName = CATEGORYNAME_FEELING,
        .height = 4,
        .weight = 66,
        .description = gRaltsPokedexText,
		.pokedexShowEntry = gRaltsPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KIRLIA] =
    {
        .categoryName = CATEGORYNAME_EMOTION,
        .height = 8,
        .weight = 202,
        .description = gKirliaPokedexText,
		.pokedexShowEntry = gKirliaPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARDEVOIR] =
    {
        .categoryName = CATEGORYNAME_EMBRACE,
        .height = 16,
        .weight = 484,
        .description = gGardevoirPokedexText,
		.pokedexShowEntry = gGardevoirPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SURSKIT] =
    {
        .categoryName = CATEGORYNAME_POND_SKATER,
        .height = 5,
        .weight = 17,
        .description = gSurskitPokedexText,
		.pokedexShowEntry = gSurskitPokedexText,
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MASQUERAIN] =
    {
        .categoryName = CATEGORYNAME_EYEBALL,
        .height = 8,
        .weight = 36,
        .description = gMasquerainPokedexText,
		.pokedexShowEntry = gMasquerainPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHROOMISH] =
    {
        .categoryName = CATEGORYNAME_MUSHROOM,
        .height = 4,
        .weight = 45,
        .description = gShroomishPokedexText,
		.pokedexShowEntry = gShroomishPokedexText,
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRELOOM] =
    {
        .categoryName = CATEGORYNAME_MUSHROOM,
        .height = 12,
        .weight = 392,
        .description = gBreloomPokedexText,
		.pokedexShowEntry = gBreloomPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLAKOTH] =
    {
        .categoryName = CATEGORYNAME_SLACKER,
        .height = 8,
        .weight = 240,
        .description = gSlakothPokedexText,
		.pokedexShowEntry = gSlakothPokedexText,
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIGOROTH] =
    {
        .categoryName = CATEGORYNAME_WILD_MONKEY,
        .height = 14,
        .weight = 465,
        .description = gVigorothPokedexText,
		.pokedexShowEntry = gVigorothPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLAKING] =
    {
        .categoryName = CATEGORYNAME_LAZY,
        .height = 20,
        .weight = 1305,
        .description = gSlakingPokedexText,
		.pokedexShowEntry = gSlakingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_NINCADA] =
    {
        .categoryName = CATEGORYNAME_TRAINEE,
        .height = 5,
        .weight = 55,
        .description = gNincadaPokedexText,
		.pokedexShowEntry = gNincadaPokedexText,
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINJASK] =
    {
        .categoryName = CATEGORYNAME_NINJA,
        .height = 8,
        .weight = 120,
        .description = gNinjaskPokedexText,
		.pokedexShowEntry = gNinjaskPokedexText,
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHEDINJA] =
    {
        .categoryName = CATEGORYNAME_SHED,
        .height = 8,
        .weight = 12,
        .description = gShedinjaPokedexText,
		.pokedexShowEntry = gShedinjaPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISMUR] =
    {
        .categoryName = CATEGORYNAME_WHISPER,
        .height = 6,
        .weight = 163,
        .description = gWhismurPokedexText,
		.pokedexShowEntry = gWhismurPokedexText,
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOUDRED] =
    {
        .categoryName = CATEGORYNAME_BIG_VOICE,
        .height = 10,
        .weight = 405,
        .description = gLoudredPokedexText,
		.pokedexShowEntry = gLoudredPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXPLOUD] =
    {
        .categoryName = CATEGORYNAME_LOUD_NOISE,
        .height = 15,
        .weight = 840,
        .description = gExploudPokedexText,
		.pokedexShowEntry = gExploudPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAKUHITA] =
    {
        .categoryName = CATEGORYNAME_GUTS,
        .height = 10,
        .weight = 864,
        .description = gMakuhitaPokedexText,
		.pokedexShowEntry = gMakuhitaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HARIYAMA] =
    {
        .categoryName = CATEGORYNAME_ARM_THRUST,
        .height = 23,
        .weight = 2538,
        .description = gHariyamaPokedexText,
		.pokedexShowEntry = gHariyamaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_AZURILL] =
    {
        .categoryName = CATEGORYNAME_POLKA_DOT,
        .height = 2,
        .weight = 20,
        .description = gAzurillPokedexText,
		.pokedexShowEntry = gAzurillPokedexText,
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOSEPASS] =
    {
        .categoryName = CATEGORYNAME_COMPASS,
        .height = 10,
        .weight = 970,
        .description = gNosepassPokedexText,
		.pokedexShowEntry = gNosepassPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SKITTY] =
    {
        .categoryName = CATEGORYNAME_KITTEN,
        .height = 6,
        .weight = 110,
        .description = gSkittyPokedexText,
		.pokedexShowEntry = gSkittyPokedexText,
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELCATTY] =
    {
        .categoryName = CATEGORYNAME_PRIM,
        .height = 11,
        .weight = 326,
        .description = gDelcattyPokedexText,
		.pokedexShowEntry = gDelcattyPokedexText,
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SABLEYE] =
    {
        .categoryName = CATEGORYNAME_DARKNESS,
        .height = 5,
        .weight = 110,
        .description = gSableyePokedexText,
		.pokedexShowEntry = gSableyePokedexText,
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAWILE] =
    {
        .categoryName = CATEGORYNAME_DECEIVER,
        .height = 6,
        .weight = 115,
        .description = gMawilePokedexText,
		.pokedexShowEntry = gMawilePokedexText,
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARON] =
    {
        .categoryName = CATEGORYNAME_IRON_ARMOR,
        .height = 4,
        .weight = 600,
        .description = gAronPokedexText,
		.pokedexShowEntry = gAronPokedexText,
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LAIRON] =
    {
        .categoryName = CATEGORYNAME_IRON_ARMOR,
        .height = 9,
        .weight = 1200,
        .description = gLaironPokedexText,
		.pokedexShowEntry = gLaironPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AGGRON] =
    {
        .categoryName = CATEGORYNAME_IRON_ARMOR,
        .height = 21,
        .weight = 3600,
        .description = gAggronPokedexText,
		.pokedexShowEntry = gAggronPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_MEDITITE] =
    {
        .categoryName = CATEGORYNAME_MEDITATE,
        .height = 6,
        .weight = 112,
        .description = gMedititePokedexText,
		.pokedexShowEntry = gMedititePokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEDICHAM] =
    {
        .categoryName = CATEGORYNAME_MEDITATE,
        .height = 13,
        .weight = 315,
        .description = gMedichamPokedexText,
		.pokedexShowEntry = gMedichamPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTRIKE] =
    {
        .categoryName = CATEGORYNAME_LIGHTNING,
        .height = 6,
        .weight = 152,
        .description = gElectrikePokedexText,
		.pokedexShowEntry = gElectrikePokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANECTRIC] =
    {
        .categoryName = CATEGORYNAME_DISCHARGE,
        .height = 15,
        .weight = 402,
        .description = gManectricPokedexText,
		.pokedexShowEntry = gManectricPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PLUSLE] =
    {
        .categoryName = CATEGORYNAME_CHEERING,
        .height = 4,
        .weight = 42,
        .description = gPluslePokedexText,
		.pokedexShowEntry = gPluslePokedexText,
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINUN] =
    {
        .categoryName = CATEGORYNAME_CHEERING,
        .height = 4,
        .weight = 42,
        .description = gMinunPokedexText,
		.pokedexShowEntry = gMinunPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLBEAT] =
    {
        .categoryName = CATEGORYNAME_FIREFLY,
        .height = 7,
        .weight = 177,
        .description = gVolbeatPokedexText,
		.pokedexShowEntry = gVolbeatPokedexText,
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ILLUMISE] =
    {
        .categoryName = CATEGORYNAME_FIREFLY,
        .height = 6,
        .weight = 177,
        .description = gIllumisePokedexText,
		.pokedexShowEntry = gIllumisePokedexText,
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROSELIA] =
    {
        .categoryName = CATEGORYNAME_THORN,
        .height = 3,
        .weight = 20,
        .description = gRoseliaPokedexText,
		.pokedexShowEntry = gRoseliaPokedexText,
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GULPIN] =
    {
        .categoryName = CATEGORYNAME_STOMACH,
        .height = 4,
        .weight = 103,
        .description = gGulpinPokedexText,
		.pokedexShowEntry = gGulpinPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWALOT] =
    {
        .categoryName = CATEGORYNAME_POISON_BAG,
        .height = 17,
        .weight = 800,
        .description = gSwalotPokedexText,
		.pokedexShowEntry = gSwalotPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CARVANHA] =
    {
        .categoryName = CATEGORYNAME_SAVAGE,
        .height = 8,
        .weight = 208,
        .description = gCarvanhaPokedexText,
		.pokedexShowEntry = gCarvanhaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHARPEDO] =
    {
        .categoryName = CATEGORYNAME_BRUTAL,
        .height = 18,
        .weight = 888,
        .description = gSharpedoPokedexText,
		.pokedexShowEntry = gSharpedoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_WAILMER] =
    {
        .categoryName = CATEGORYNAME_BALL_WHALE,
        .height = 20,
        .weight = 1300,
        .description = gWailmerPokedexText,
		.pokedexShowEntry = gWailmerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WAILORD] =
    {
        .categoryName = CATEGORYNAME_FLOAT_WHALE,
        .height = 145,
        .weight = 3980,
        .description = gWailordPokedexText,
		.pokedexShowEntry = gWailordPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
    },

    [NATIONAL_DEX_NUMEL] =
    {
        .categoryName = CATEGORYNAME_NUMB,
        .height = 7,
        .weight = 240,
        .description = gNumelPokedexText,
		.pokedexShowEntry = gNumelPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CAMERUPT] =
    {
        .categoryName = CATEGORYNAME_ERUPTION,
        .height = 19,
        .weight = 2200,
        .description = gCameruptPokedexText,
		.pokedexShowEntry = gCameruptPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_TORKOAL] =
    {
        .categoryName = CATEGORYNAME_COAL,
        .height = 5,
        .weight = 804,
        .description = gTorkoalPokedexText,
		.pokedexShowEntry = gTorkoalPokedexText,
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPOINK] =
    {
        .categoryName = CATEGORYNAME_BOUNCE,
        .height = 7,
        .weight = 306,
        .description = gSpoinkPokedexText,
		.pokedexShowEntry = gSpoinkPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRUMPIG] =
    {
        .categoryName = CATEGORYNAME_MANIPULATE,
        .height = 9,
        .weight = 715,
        .description = gGrumpigPokedexText,
		.pokedexShowEntry = gGrumpigPokedexText,
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPINDA] =
    {
        .categoryName = CATEGORYNAME_SPOT_PANDA,
        .height = 11,
        .weight = 50,
        .description = gSpindaPokedexText,
		.pokedexShowEntry = gSpindaPokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRAPINCH] =
    {
        .categoryName = CATEGORYNAME_ANT_PIT,
        .height = 7,
        .weight = 150,
        .description = gTrapinchPokedexText,
		.pokedexShowEntry = gTrapinchPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIBRAVA] =
    {
        .categoryName = CATEGORYNAME_VIBRATION,
        .height = 11,
        .weight = 153,
        .description = gVibravaPokedexText,
		.pokedexShowEntry = gVibravaPokedexText,
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLYGON] =
    {
        .categoryName = CATEGORYNAME_MYSTIC,
        .height = 20,
        .weight = 820,
        .description = gFlygonPokedexText,
		.pokedexShowEntry = gFlygonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CACNEA] =
    {
        .categoryName = CATEGORYNAME_CACTUS,
        .height = 4,
        .weight = 513,
        .description = gCacneaPokedexText,
		.pokedexShowEntry = gCacneaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CACTURNE] =
    {
        .categoryName = CATEGORYNAME_SCARECROW,
        .height = 13,
        .weight = 774,
        .description = gCacturnePokedexText,
		.pokedexShowEntry = gCacturnePokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWABLU] =
    {
        .categoryName = CATEGORYNAME_COTTON_BIRD,
        .height = 4,
        .weight = 12,
        .description = gSwabluPokedexText,
		.pokedexShowEntry = gSwabluPokedexText,
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALTARIA] =
    {
        .categoryName = CATEGORYNAME_HUMMING,
        .height = 11,
        .weight = 206,
        .description = gAltariaPokedexText,
		.pokedexShowEntry = gAltariaPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZANGOOSE] =
    {
        .categoryName = CATEGORYNAME_CAT_FERRET,
        .height = 13,
        .weight = 403,
        .description = gZangoosePokedexText,
		.pokedexShowEntry = gZangoosePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEVIPER] =
    {
        .categoryName = CATEGORYNAME_FANG_SNAKE,
        .height = 27,
        .weight = 525,
        .description = gSeviperPokedexText,
		.pokedexShowEntry = gSeviperPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUNATONE] =
    {
        .categoryName = CATEGORYNAME_METEORITE,
        .height = 10,
        .weight = 1680,
        .description = gLunatonePokedexText,
		.pokedexShowEntry = gLunatonePokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOLROCK] =
    {
        .categoryName = CATEGORYNAME_METEORITE,
        .height = 12,
        .weight = 1540,
        .description = gSolrockPokedexText,
		.pokedexShowEntry = gSolrockPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARBOACH] =
    {
        .categoryName = CATEGORYNAME_WHISKERS,
        .height = 4,
        .weight = 19,
        .description = gBarboachPokedexText,
		.pokedexShowEntry = gBarboachPokedexText,
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISCASH] =
    {
        .categoryName = CATEGORYNAME_WHISKERS,
        .height = 9,
        .weight = 236,
        .description = gWhiscashPokedexText,
		.pokedexShowEntry = gWhiscashPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORPHISH] =
    {
        .categoryName = CATEGORYNAME_RUFFIAN,
        .height = 6,
        .weight = 115,
        .description = gCorphishPokedexText,
		.pokedexShowEntry = gCorphishPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRAWDAUNT] =
    {
        .categoryName = CATEGORYNAME_ROGUE,
        .height = 11,
        .weight = 328,
        .description = gCrawdauntPokedexText,
		.pokedexShowEntry = gCrawdauntPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BALTOY] =
    {
        .categoryName = CATEGORYNAME_CLAY_DOLL,
        .height = 5,
        .weight = 215,
        .description = gBaltoyPokedexText,
		.pokedexShowEntry = gBaltoyPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAYDOL] =
    {
        .categoryName = CATEGORYNAME_CLAY_DOLL,
        .height = 15,
        .weight = 1080,
        .description = gClaydolPokedexText,
		.pokedexShowEntry = gClaydolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_LILEEP] =
    {
        .categoryName = CATEGORYNAME_SEA_LILY,
        .height = 10,
        .weight = 238,
        .description = gLileepPokedexText,
		.pokedexShowEntry = gLileepPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRADILY] =
    {
        .categoryName = CATEGORYNAME_BARNACLE,
        .height = 15,
        .weight = 604,
        .description = gCradilyPokedexText,
		.pokedexShowEntry = gCradilyPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANORITH] =
    {
        .categoryName = CATEGORYNAME_OLD_SHRIMP,
        .height = 7,
        .weight = 125,
        .description = gAnorithPokedexText,
		.pokedexShowEntry = gAnorithPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARMALDO] =
    {
        .categoryName = CATEGORYNAME_PLATE,
        .height = 15,
        .weight = 682,
        .description = gArmaldoPokedexText,
		.pokedexShowEntry = gArmaldoPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEEBAS] =
    {
        .categoryName = CATEGORYNAME_FISH,
        .height = 6,
        .weight = 74,
        .description = gFeebasPokedexText,
		.pokedexShowEntry = gFeebasPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILOTIC] =
    {
        .categoryName = CATEGORYNAME_TENDER,
        .height = 62,
        .weight = 1620,
        .description = gMiloticPokedexText,
		.pokedexShowEntry = gMiloticPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CASTFORM] =
    {
        .categoryName = CATEGORYNAME_WEATHER,
        .height = 3,
        .weight = 8,
        .description = gCastformPokedexText,
		.pokedexShowEntry = gCastformPokedexText,
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KECLEON] =
    {
        .categoryName = CATEGORYNAME_COLOR_SWAP,
        .height = 10,
        .weight = 220,
        .description = gKecleonPokedexText,
		.pokedexShowEntry = gKecleonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUPPET] =
    {
        .categoryName = CATEGORYNAME_PUPPET,
        .height = 6,
        .weight = 23,
        .description = gShuppetPokedexText,
		.pokedexShowEntry = gShuppetPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BANETTE] =
    {
        .categoryName = CATEGORYNAME_MARIONETTE,
        .height = 11,
        .weight = 125,
        .description = gBanettePokedexText,
		.pokedexShowEntry = gBanettePokedexText,
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSKULL] =
    {
        .categoryName = CATEGORYNAME_REQUIEM,
        .height = 8,
        .weight = 150,
        .description = gDuskullPokedexText,
		.pokedexShowEntry = gDuskullPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSCLOPS] =
    {
        .categoryName = CATEGORYNAME_BECKON,
        .height = 16,
        .weight = 306,
        .description = gDusclopsPokedexText,
		.pokedexShowEntry = gDusclopsPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TROPIUS] =
    {
        .categoryName = CATEGORYNAME_FRUIT,
        .height = 20,
        .weight = 1000,
        .description = gTropiusPokedexText,
		.pokedexShowEntry = gTropiusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CHIMECHO] =
    {
        .categoryName = CATEGORYNAME_WIND_CHIME,
        .height = 6,
        .weight = 10,
        .description = gChimechoPokedexText,
		.pokedexShowEntry = gChimechoPokedexText,
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABSOL] =
    {
        .categoryName = CATEGORYNAME_DISASTER,
        .height = 12,
        .weight = 470,
        .description = gAbsolPokedexText,
		.pokedexShowEntry = gAbsolPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WYNAUT] =
    {
        .categoryName = CATEGORYNAME_BRIGHT,
        .height = 6,
        .weight = 140,
        .description = gWynautPokedexText,
		.pokedexShowEntry = gWynautPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNORUNT] =
    {
        .categoryName = CATEGORYNAME_SNOW_HAT,
        .height = 7,
        .weight = 168,
        .description = gSnoruntPokedexText,
		.pokedexShowEntry = gSnoruntPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLALIE] =
    {
        .categoryName = CATEGORYNAME_FACE,
        .height = 15,
        .weight = 2565,
        .description = gGlaliePokedexText,
		.pokedexShowEntry = gGlaliePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPHEAL] =
    {
        .categoryName = CATEGORYNAME_CLAP,
        .height = 8,
        .weight = 395,
        .description = gSphealPokedexText,
		.pokedexShowEntry = gSphealPokedexText,
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEALEO] =
    {
        .categoryName = CATEGORYNAME_BALL_ROLL,
        .height = 11,
        .weight = 876,
        .description = gSealeoPokedexText,
		.pokedexShowEntry = gSealeoPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WALREIN] =
    {
        .categoryName = CATEGORYNAME_ICE_BREAK,
        .height = 14,
        .weight = 1506,
        .description = gWalreinPokedexText,
		.pokedexShowEntry = gWalreinPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAMPERL] =
    {
        .categoryName = CATEGORYNAME_BIVALVE,
        .height = 4,
        .weight = 525,
        .description = gClamperlPokedexText,
		.pokedexShowEntry = gClamperlPokedexText,
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HUNTAIL] =
    {
        .categoryName = CATEGORYNAME_DEEP_SEA,
        .height = 17,
        .weight = 270,
        .description = gHuntailPokedexText,
		.pokedexShowEntry = gHuntailPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOREBYSS] =
    {
        .categoryName = CATEGORYNAME_SOUTH_SEA,
        .height = 18,
        .weight = 226,
        .description = gGorebyssPokedexText,
		.pokedexShowEntry = gGorebyssPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RELICANTH] =
    {
        .categoryName = CATEGORYNAME_LONGEVITY,
        .height = 10,
        .weight = 234,
        .description = gRelicanthPokedexText,
		.pokedexShowEntry = gRelicanthPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUVDISC] =
    {
        .categoryName = CATEGORYNAME_RENDEZVOUS,
        .height = 6,
        .weight = 87,
        .description = gLuvdiscPokedexText,
		.pokedexShowEntry = gLuvdiscPokedexText,
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAGON] =
    {
        .categoryName = CATEGORYNAME_ROCK_HEAD,
        .height = 6,
        .weight = 421,
        .description = gBagonPokedexText,
		.pokedexShowEntry = gBagonPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELGON] =
    {
        .categoryName = CATEGORYNAME_ENDURANCE,
        .height = 11,
        .weight = 1105,
        .description = gShelgonPokedexText,
		.pokedexShowEntry = gShelgonPokedexText,
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALAMENCE] =
    {
        .categoryName = CATEGORYNAME_DRAGON,
        .height = 15,
        .weight = 1026,
        .description = gSalamencePokedexText,
		.pokedexShowEntry = gSalamencePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELDUM] =
    {
        .categoryName = CATEGORYNAME_IRON_BALL,
        .height = 6,
        .weight = 952,
        .description = gBeldumPokedexText,
		.pokedexShowEntry = gBeldumPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METANG] =
    {
        .categoryName = CATEGORYNAME_IRON_CLAW,
        .height = 12,
        .weight = 2025,
        .description = gMetangPokedexText,
		.pokedexShowEntry = gMetangPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METAGROSS] =
    {
        .categoryName = CATEGORYNAME_IRON_LEG,
        .height = 16,
        .weight = 5500,
        .description = gMetagrossPokedexText,
		.pokedexShowEntry = gMetagrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
    },

    [NATIONAL_DEX_REGIROCK] =
    {
        .categoryName = CATEGORYNAME_ROCK_PEAK,
        .height = 17,
        .weight = 2300,
        .description = gRegirockPokedexText,
		.pokedexShowEntry = gRegirockPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_REGICE] =
    {
        .categoryName = CATEGORYNAME_ICEBERG,
        .height = 18,
        .weight = 1750,
        .description = gRegicePokedexText,
		.pokedexShowEntry = gRegicePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REGISTEEL] =
    {
        .categoryName = CATEGORYNAME_IRON,
        .height = 19,
        .weight = 2050,
        .description = gRegisteelPokedexText,
		.pokedexShowEntry = gRegisteelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_LATIAS] =
    {
        .categoryName = CATEGORYNAME_EON,
        .height = 14,
        .weight = 400,
        .description = gLatiasPokedexText,
		.pokedexShowEntry = gLatiasPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LATIOS] =
    {
        .categoryName = CATEGORYNAME_EON,
        .height = 20,
        .weight = 600,
        .description = gLatiosPokedexText,
		.pokedexShowEntry = gLatiosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_KYOGRE] =
    {
        .categoryName = CATEGORYNAME_SEA_BASIN,
        .height = 45,
        .weight = 3520,
        .description = gKyogrePokedexText,
		.pokedexShowEntry = gKyogrePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_GROUDON] =
    {
        .categoryName = CATEGORYNAME_CONTINENT,
        .height = 35,
        .weight = 9500,
        .description = gGroudonPokedexText,
		.pokedexShowEntry = gGroudonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_RAYQUAZA] =
    {
        .categoryName = CATEGORYNAME_SKY_HIGH,
        .height = 70,
        .weight = 2065,
        .description = gRayquazaPokedexText,
		.pokedexShowEntry = gRayquazaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
    },

    [NATIONAL_DEX_JIRACHI] =
    {
        .categoryName = CATEGORYNAME_WISH,
        .height = 3,
        .weight = 11,
        .description = gJirachiPokedexText,
		.pokedexShowEntry = gJirachiPokedexText,
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEOXYS] =
    {
        .categoryName = CATEGORYNAME_DNA,
        .height = 17,
        .weight = 608,
        .description = gDeoxysPokedexText,
		.pokedexShowEntry = gDeoxysPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },
};
