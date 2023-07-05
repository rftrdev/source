#ifndef __HISTORY_H
#define __HISTORY_H

void GameInitHistory();
void EnterHistory();
void ExitHistory();
void HandleHistory();
void RenderHistory();


#define		HISTORY_DATA_FILE						"TEMP\\History.dat"

// the financial structure
struct history{
 UINT8 ubCode; // the code index in the finance code table
 UINT32 uiIdNumber; // unique id number
 UINT8 ubSecondCode; // secondary code 
 UINT32 uiDate; // time in the world in global time
 INT16 sSectorX; // sector X this took place in
 INT16 sSectorY; // sector Y this took place in
 INT8 bSectorZ;
 UINT8 ubColor;
 struct history *Next; // next unit in the list
};

typedef struct
{
	UINT32 uiIndex;
	CHAR16 sHistory[128];
	
} HISTORY_VALUES;

extern HISTORY_VALUES HistoryName[500];

enum{
	HISTORY_ENTERED_HISTORY_MODE=0,
	HISTORY_HIRED_MERC_FROM_AIM,
	HISTORY_HIRED_MERC_FROM_MERC,
	HISTORY_MERC_KILLED,
	HISTORY_SETTLED_ACCOUNTS_AT_MERC,
	HISTORY_ACCEPTED_ASSIGNMENT_FROM_ENRICO,
	HISTORY_CHARACTER_GENERATED,
	HISTORY_PURCHASED_INSURANCE,
	HISTORY_CANCELLED_INSURANCE,
	HISTORY_INSURANCE_CLAIM_PAYOUT,
	HISTORY_EXTENDED_CONTRACT_1_DAY,
	HISTORY_EXTENDED_CONTRACT_1_WEEK,
	HISTORY_EXTENDED_CONTRACT_2_WEEK,
	HISTORY_MERC_FIRED,
	HISTORY_MERC_QUIT,
	HISTORY_QUEST_STARTED,
	HISTORY_QUEST_FINISHED,
	HISTORY_TALKED_TO_MINER,
	HISTORY_LIBERATED_TOWN,
	HISTORY_CHEAT_ENABLED,
	HISTORY_TALKED_TO_FATHER_WALKER,
	HISTORY_MERC_MARRIED_OFF,
	HISTORY_MERC_CONTRACT_EXPIRED,
	HISTORY_RPC_JOINED_TEAM,
	HISTORY_ENRICO_COMPLAINED,
	HISTORY_WONBATTLE,
	HISTORY_MINE_RUNNING_OUT,
	HISTORY_MINE_RAN_OUT,
	HISTORY_MINE_SHUTDOWN,
	HISTORY_MINE_REOPENED,
	HISTORY_DISCOVERED_TIXA,
	HISTORY_DISCOVERED_ORTA,
	HISTORY_GOT_ROCKET_RIFLES,
	HISTORY_DEIDRANNA_DEAD_BODIES,
	HISTORY_BOXING_MATCHES,
	HISTORY_SOMETHING_IN_MINES,
	HISTORY_DEVIN,
	HISTORY_MIKE,
	HISTORY_TONY,
	HISTORY_KROTT,
	HISTORY_KYLE,
	HISTORY_MADLAB,
	HISTORY_GABBY,
	HISTORY_KEITH_OUT_OF_BUSINESS,
	HISTORY_HOWARD_CYANIDE,
	HISTORY_KEITH,
	HISTORY_HOWARD,
	HISTORY_PERKO,
	HISTORY_SAM,
	HISTORY_FRANZ,
	HISTORY_ARNOLD,
	HISTORY_FREDO,
	HISTORY_RICHGUY_BALIME,
	HISTORY_JAKE,
	HISTORY_BUM_KEYCARD,
	HISTORY_WALTER,
	HISTORY_DAVE,
	HISTORY_PABLO,
	HISTORY_KINGPIN_MONEY,
	HISTORY_WON_BOXING,
	HISTORY_LOST_BOXING,
	HISTORY_DISQUALIFIED_BOXING,
	HISTORY_FOUND_MONEY,
	HISTORY_ASSASSIN,
	HISTORY_LOSTTOWNSECTOR,
	HISTORY_DEFENDEDTOWNSECTOR,
	HISTORY_LOSTBATTLE,
	HISTORY_FATALAMBUSH,
	HISTORY_WIPEDOUTENEMYAMBUSH,
	HISTORY_UNSUCCESSFULATTACK,
	HISTORY_SUCCESSFULATTACK,
	HISTORY_CREATURESATTACKED,
	HISTORY_KILLEDBYBLOODCATS,
	HISTORY_SLAUGHTEREDBLOODCATS,
	HISTORY_NPC_KILLED,
	HISTORY_GAVE_CARMEN_HEAD,
	HISTORY_SLAY_MYSTERIOUSLY_LEFT,
	HISTORY_MERC_KILLED_CHARACTER,
	HISTORY_WALDO,
	HISTORY_HELICOPTER_REPAIR_STARTED,
	HISTORY_INTERCEPTED_TRANSPORT_GROUP,
	TEXT_NUM_HISTORY
};

typedef struct history HistoryUnit;
typedef struct history *HistoryUnitPtr;

extern HistoryUnitPtr pHistoryListHead;

// reset history fact..for quests
void ResetHistoryFact( UINT8 ubCode, INT16 sSectorX, INT16 sSectorY );

// set history fact...to allow for a different color for in progress quests
UINT32 SetHistoryFact( UINT8 ubCode, UINT8 ubSecondCode, UINT32 uiDate, INT16 sSectorX, INT16 sSectorY );


UINT32 AddHistoryToPlayersLog(UINT8 ubCode, UINT8 ubSecondCode, UINT32 uiDate, INT16 sSectorX, INT16 sSectorY );
UINT32 GetTimeQuestWasStarted( UINT8 ubCode );

#endif



 


