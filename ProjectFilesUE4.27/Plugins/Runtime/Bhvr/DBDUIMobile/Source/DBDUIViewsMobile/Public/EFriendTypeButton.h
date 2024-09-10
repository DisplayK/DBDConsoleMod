#pragma once

#include "CoreMinimal.h"
#include "EFriendTypeButton.generated.h"

UENUM(BlueprintType)
enum class EFriendTypeButton : uint8
{
	InvitePlayerToParty,
	RemovePlayerFromParty,
};
