#pragma once

#include "CoreMinimal.h"
#include "ERichPresenceStatus.generated.h"

UENUM(BlueprintType)
enum class ERichPresenceStatus : uint8
{
	Offline,
	Connected,
	InMenus,
	InPartyLobby,
	InOnlineLobby,
	InMatch,
};
