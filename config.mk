# Default variables

GAME_LANGUAGE ?= ENGLISH
MODERN        ?= 0
DEBUG         ?= 0
RELEASE_ID    ?= 0
COMPARE       ?= 0

ifneq (,$(filter modern,$(MAKECMDGOALS)))
  MODERN := 1
endif

ifeq (compare,$(MAKECMDGOALS))
  COMPARE := 1
endif

ifneq (,$(filter english,$(MAKECMDGOALS)))
  override GAME_LANGUAGE := ENGLISH
endif

ifneq (,$(filter spanish es,$(MAKECMDGOALS)))
  override GAME_LANGUAGE := SPANISH
endif

ifeq (debug,$(MAKECMDGOALS))
  DEBUG := 1
endif

# ROM output
ifeq ($(GAME_LANGUAGE),ENGLISH)
  BUILD_SUFFIX :=
  GAME_CODE    := BPEE
  ROM_NAME     := CrystalDust_legacy.gba
  MODERN_ROM_NAME := CrystalDust.gba
else ifeq ($(GAME_LANGUAGE),SPANISH)
  BUILD_SUFFIX := _es
  GAME_CODE    := BPES
  ROM_NAME     := CrystalDust_legacy_es.gba
  MODERN_ROM_NAME := CrystalDust_es.gba
else
  $(error unknown language $(GAME_LANGUAGE))
endif

OBJ_DIR_NAME        := build/emerald$(BUILD_SUFFIX)
MODERN_OBJ_DIR_NAME := build/modern$(BUILD_SUFFIX)
