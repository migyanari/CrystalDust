#if GAME_LANGUAGE == LANGUAGE_SPANISH
#include "spanish/nature_names.h"
#else
#include "english/nature_names.h"
#endif

const u8 *const gNatureNamePointers[NUM_NATURES] =
{
    [NATURE_HARDY] = sHardyNatureName,
    [NATURE_LONELY] = sLonelyNatureName,
    [NATURE_BRAVE] = sBraveNatureName,
    [NATURE_ADAMANT] = sAdamantNatureName,
    [NATURE_NAUGHTY] = sNaughtyNatureName,
    [NATURE_BOLD] = sBoldNatureName,
    [NATURE_DOCILE] = sDocileNatureName,
    [NATURE_RELAXED] = sRelaxedNatureName,
    [NATURE_IMPISH] = sImpishNatureName,
    [NATURE_LAX] = sLaxNatureName,
    [NATURE_TIMID] = sTimidNatureName,
    [NATURE_HASTY] = sHastyNatureName,
    [NATURE_SERIOUS] = sSeriousNatureName,
    [NATURE_JOLLY] = sJollyNatureName,
    [NATURE_NAIVE] = sNaiveNatureName,
    [NATURE_MODEST] = sModestNatureName,
    [NATURE_MILD] = sMildNatureName,
    [NATURE_QUIET] = sQuietNatureName,
    [NATURE_BASHFUL] = sBashfulNatureName,
    [NATURE_RASH] = sRashNatureName,
    [NATURE_CALM] = sCalmNatureName,
    [NATURE_GENTLE] = sGentleNatureName,
    [NATURE_SASSY] = sSassyNatureName,
    [NATURE_CAREFUL] = sCarefulNatureName,
    [NATURE_QUIRKY] = sQuirkyNatureName,
};
