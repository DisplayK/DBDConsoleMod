#pragma once

#include "CoreMinimal.h"
#include "EOnlineMessageFlag.generated.h"

UENUM(BlueprintType)
enum class EOnlineMessageFlag : uint8
{
	New,
	Read,
	Archived,
};
