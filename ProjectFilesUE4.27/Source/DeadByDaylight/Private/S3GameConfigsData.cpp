#include "S3GameConfigsData.h"

FS3GameConfigsData::FS3GameConfigsData()
{
	this->Analytics = FS3AnalyticsConfig{};
	this->Archives = FArchivesConfig{};
	this->BalanceTool = FBalanceToolGameConfig{};
	this->BalanceTool_IsSet = false;
	this->BeginnerTutorialLevel = FS3BeginnerTutorialLevelConfig{};
	this->BotMatch = FBotMatchConfig{};
	this->DedicatedServer = FDedicatedServerGameConfig{};
	this->EnableNetAsyncLoading = false;
	this->EnablePlayersConnectionStatus = false;
	this->EnablePlayerIdInSurvey = false;
	this->EnableBotsInCustomMatch = false;
	this->DisableNavigationDuringMatchmaking = false;
	this->RTMTimeoutThreshold = 0.0f;
	this->EnableHapticVibration = false;
	this->EnableWinGDKAccountMismatchPopup = false;
	this->EnableAntiMoveHack = false;
	this->FriendsList = FS3FriendsListGameConfig{};
	this->HitValidation = FHitValidationGameConfig{};
	this->Jwt = FJwtGameConfig{};
	this->Match = FS3MatchConfig{};
	this->MatchmakingCrossplayPlatforms = TMap<FString, bool>();
	this->MirrorsDefaultRetryPolicy = FS3MirrorsDefaultRetryPolicyConfig{};
	this->Online = FS3OnlineConfig{};
	this->Security = FS3SecurityConfig{};
	this->SocialCrossfriendsPlatforms = TMap<FString, bool>();
	this->SocialCrossprogressionPlatforms = TMap<FString, bool>();
}
