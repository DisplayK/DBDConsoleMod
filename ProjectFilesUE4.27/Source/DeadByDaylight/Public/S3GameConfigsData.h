#pragma once

#include "CoreMinimal.h"
#include "S3AnalyticsConfig.h"
#include "S3FriendsListGameConfig.h"
#include "ArchivesConfig.h"
#include "BalanceToolGameConfig.h"
#include "DedicatedServerGameConfig.h"
#include "BotMatchConfig.h"
#include "S3BeginnerTutorialLevelConfig.h"
#include "HitValidationGameConfig.h"
#include "JwtGameConfig.h"
#include "S3OnlineConfig.h"
#include "S3MatchConfig.h"
#include "S3MirrorsDefaultRetryPolicyConfig.h"
#include "S3SecurityConfig.h"
#include "S3GameConfigsData.generated.h"

USTRUCT()
struct FS3GameConfigsData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FS3AnalyticsConfig Analytics;

	UPROPERTY()
	FArchivesConfig Archives;

	UPROPERTY()
	FBalanceToolGameConfig BalanceTool;

	UPROPERTY(SkipSerialization)
	bool BalanceTool_IsSet;

	UPROPERTY()
	FS3BeginnerTutorialLevelConfig BeginnerTutorialLevel;

	UPROPERTY()
	FBotMatchConfig BotMatch;

	UPROPERTY()
	FDedicatedServerGameConfig DedicatedServer;

	UPROPERTY()
	bool EnableNetAsyncLoading;

	UPROPERTY()
	bool EnablePlayersConnectionStatus;

	UPROPERTY()
	bool EnablePlayerIdInSurvey;

	UPROPERTY()
	bool EnableBotsInCustomMatch;

	UPROPERTY()
	bool DisableNavigationDuringMatchmaking;

	UPROPERTY()
	float RTMTimeoutThreshold;

	UPROPERTY()
	bool EnableHapticVibration;

	UPROPERTY()
	bool EnableWinGDKAccountMismatchPopup;

	UPROPERTY()
	bool EnableAntiMoveHack;

	UPROPERTY()
	FS3FriendsListGameConfig FriendsList;

	UPROPERTY()
	FHitValidationGameConfig HitValidation;

	UPROPERTY()
	FJwtGameConfig Jwt;

	UPROPERTY()
	FS3MatchConfig Match;

	UPROPERTY()
	TMap<FString, bool> MatchmakingCrossplayPlatforms;

	UPROPERTY()
	FS3MirrorsDefaultRetryPolicyConfig MirrorsDefaultRetryPolicy;

	UPROPERTY()
	FS3OnlineConfig Online;

	UPROPERTY()
	FS3SecurityConfig Security;

	UPROPERTY()
	TMap<FString, bool> SocialCrossfriendsPlatforms;

	UPROPERTY()
	TMap<FString, bool> SocialCrossprogressionPlatforms;

public:
	DEADBYDAYLIGHT_API FS3GameConfigsData();
};

FORCEINLINE uint32 GetTypeHash(const FS3GameConfigsData) { return 0; }
