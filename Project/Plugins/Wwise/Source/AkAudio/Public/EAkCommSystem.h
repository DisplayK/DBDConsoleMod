#pragma once

#include "CoreMinimal.h"
#include "EAkCommSystem.generated.h"

UENUM(BlueprintType)
enum class EAkCommSystem : uint8
{
	Socket,
	HTCS,
};
