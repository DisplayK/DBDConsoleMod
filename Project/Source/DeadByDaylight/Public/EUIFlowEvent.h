#pragma once

#include "CoreMinimal.h"
#include "EUIFlowEvent.generated.h"

UENUM(BlueprintType)
enum class EUIFlowEvent : uint8
{
	None,
	AtlantaRoleSelectionScreenReady,
	AtlantaNavigationScreenReady,
	InGameHudReady,
	LoadingScreenReady,
	OfflineLobbyScreenReady,
	OnlineLobbyScreenReady,
	RoleSelectionScreenReady,
	SplashScreenReady,
	TallyScreenReady,
	PartyLobbyScreenReady,
	StoreScreenReady,
};
