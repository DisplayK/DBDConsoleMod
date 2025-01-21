#pragma once

#include "CoreMinimal.h"
#include "EFlowTransitionType.generated.h"

UENUM(BlueprintType)
enum class EFlowTransitionType : uint8
{
	Tally,
	OnlineLobby,
	PartyLobby,
	OfflineLobby,
	Splash,
	RoleSelection,
	None,
};
