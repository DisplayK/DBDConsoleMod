#pragma once

#include "CoreMinimal.h"
#include "EAttachToSocketNameEnum.generated.h"

UENUM(BlueprintType)
enum class EAttachToSocketNameEnum : uint8
{
	ManualAttachment,
	HandItemSocket,
	Weapon_SocketLT,
	Weapon_SocketRT,
	LanternCollectableSocket,
	Tentacle_SocketLT,
};
