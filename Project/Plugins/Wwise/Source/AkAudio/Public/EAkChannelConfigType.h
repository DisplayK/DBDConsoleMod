#pragma once

#include "CoreMinimal.h"
#include "EAkChannelConfigType.generated.h"

UENUM(BlueprintType)
enum class EAkChannelConfigType : uint8
{
	Anonymous,
	Standard,
	Ambisonic,
};
