#pragma once

#include "CoreMinimal.h"
#include "EWorldFlowEvent.generated.h"

UENUM(BlueprintType)
enum class EWorldFlowEvent : uint8
{
	None,
	GameLevelLoaded,
	LoadingGameLevel,
	LoadingOfflineParadise,
	LoadingOnlineLobbyLevel,
	OfflineLobbyMapLoaded,
	OfflineParadiseLoaded,
	OnlineLobbyMapLoaded,
	StartScreenMapLoaded,
	LoadingSplashScreen,
};
