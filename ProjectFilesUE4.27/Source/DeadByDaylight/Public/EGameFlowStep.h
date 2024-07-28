#pragma once

#include "CoreMinimal.h"
#include "EGameFlowStep.generated.h"

UENUM(BlueprintType)
enum class EGameFlowStep : uint8
{
	None,
	InGame,
	OfflineLobby,
	OfflineTally,
	OnlineLobby,
	SplashScreen,
	PartyLobby,
	Store,
	RoleSelection,
};
