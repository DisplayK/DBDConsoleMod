#pragma once

#include "CoreMinimal.h"
#include "DBDScalabilityLevel.generated.h"

UENUM(BlueprintType)
enum class DBDScalabilityLevel : uint8
{
	LOW,
	MEDIUM,
	HIGH,
	EPIC,
	ULTRA,
};
