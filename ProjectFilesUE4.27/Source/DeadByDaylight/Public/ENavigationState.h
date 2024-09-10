#pragma once

#include "CoreMinimal.h"
#include "ENavigationState.generated.h"

UENUM(BlueprintType)
enum class ENavigationState : uint8
{
	RoleSelection,
	Customization,
	CharacterSelection,
	Lobby,
	BloodStore,
	None,
};
