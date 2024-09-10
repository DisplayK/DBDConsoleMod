#pragma once

#include "CoreMinimal.h"
#include "ELobbyState.generated.h"

UENUM(BlueprintType)
enum class ELobbyState : uint8
{
	Searching,
	Joined,
	Offering,
	Fog,
};
