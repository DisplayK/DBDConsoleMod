#pragma once

#include "CoreMinimal.h"
#include "EDBDAnalyticsGameMode.generated.h"

UENUM(BlueprintType)
enum class EDBDAnalyticsGameMode : uint8
{
	AnalyticsServer,
	AnalyticsClient,
	AnalyticsLoading,
	AnalyticsLobby,
	AnalyticsMenu,
	AnalyticsPostGame,
	AnalyticsPerfTests,
	AnalyticsSplashScreen,
};
