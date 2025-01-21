#pragma once

#include "CoreMinimal.h"
#include "EFriendUIRichPresence.generated.h"

UENUM(BlueprintType)
enum class EFriendUIRichPresence : uint8
{
	Undefined,
	InMenus,
	InLobby,
	InMatch,
	Connected,
	Closing,
};
