#ifndef GUARD_CONFIG_DEXNAV_H
#define GUARD_CONFIG_DEXNAV_H

#define DEXNAV_ENABLED                TRUE  // Whether or not DexNav is enabled. If TRUE, flags/vars below must all be non-zero
#define USE_DEXNAV_SEARCH_LEVELS      TRUE  /* WARNING: POSSIBLY EXCEEDS SAVEBLOCK SPACE! REQUIRES 1 BYTE PER SPECIES */

// Flag/var defines
#define DN_FLAG_SEARCHING             0x20 // Searching for mon
#define DN_FLAG_DEXNAV_GET            0x21 // DexNav shows in start menu
#define DN_FLAG_DETECTOR_MODE         0x22 // Allow player to find hidden mons
#define DN_VAR_SPECIES                0x40F7 // Registered DexNav species
#define DN_VAR_STEP_COUNTER           0x40F8 // Steps for finding hidden pokemon

// Search parameters
#define DEXNAV_TIMEOUT                  15  // 15 seconds is the time out. Max of 1092 seconds allowed
#define SNEAKING_PROXIMITY              4   // Tile amount
#define CREEPING_PROXIMITY              2
#define MAX_PROXIMITY                   20

#define DEXNAV_CHAIN_MAX                100 // maximum chain value

// hidden pokemon options - an approximation of values to due to lack of available data
#define HIDDEN_MON_STEP_COUNT       100  // Look for hidden pokemon every x steps
#define HIDDEN_MON_SEARCH_RATE      25   // x% chance of finding hidden pokemon every x steps
#define HIDDEN_MON_PROBABILTY       15   // x% chance of finding hidden mon compared to regular encounter data

//// SEARCH PROBABILITIES
// See https://bulbapedia.bulbagarden.net/wiki/DexNav#Benefits
// Chance of encountering egg move at search levels
#define SEARCHLEVEL0_MOVECHANCE         0
#define SEARCHLEVEL5_MOVECHANCE         20
#define SEARCHLEVEL10_MOVECHANCE        50
#define SEARCHLEVEL25_MOVECHANCE        80
#define SEARCHLEVEL50_MOVECHANCE        80
#define SEARCHLEVEL100_MOVECHANCE       80
// Chance of encountering Hidden Abilities at search levels
#define SEARCHLEVEL0_ABILITYCHANCE      0
#define SEARCHLEVEL5_ABILITYCHANCE      20
#define SEARCHLEVEL10_ABILITYCHANCE     50
#define SEARCHLEVEL25_ABILITYCHANCE     50
#define SEARCHLEVEL50_ABILITYCHANCE     50
#define SEARCHLEVEL100_ABILITYCHANCE    50
// Chance of encountering held item
#define SEARCHLEVEL0_ITEM               100
#define SEARCHLEVEL5_ITEM               100
#define SEARCHLEVEL10_ITEM              100
#define SEARCHLEVEL25_ITEM              100
#define SEARCHLEVEL50_ITEM              100
#define SEARCHLEVEL100_ITEM             100
// Chance of encountering one star potential
#define SEARCHLEVEL0_ONESTAR            100
#define SEARCHLEVEL5_ONESTAR            95
#define SEARCHLEVEL10_ONESTAR           80
#define SEARCHLEVEL25_ONESTAR           40
#define SEARCHLEVEL50_ONESTAR           0
#define SEARCHLEVEL100_ONESTAR          0
// Chance of encountering two star potential
#define SEARCHLEVEL0_TWOSTAR            0
#define SEARCHLEVEL5_TWOSTAR            5
#define SEARCHLEVEL10_TWOSTAR           20
#define SEARCHLEVEL25_TWOSTAR           50
#define SEARCHLEVEL50_TWOSTAR           70
#define SEARCHLEVEL100_TWOSTAR          0
// Chance of encountering three star potential
#define SEARCHLEVEL0_THREESTAR          0
#define SEARCHLEVEL5_THREESTAR          0
#define SEARCHLEVEL10_THREESTAR         0
#define SEARCHLEVEL25_THREESTAR         10
#define SEARCHLEVEL50_THREESTAR         30
#define SEARCHLEVEL100_THREESTAR        100

#endif // GUARD_CONFIG_DEXNAV_H
