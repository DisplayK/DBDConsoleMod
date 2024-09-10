#pragma once

#include "CoreMinimal.h"
#include "EAttribStorageType.generated.h"

UENUM()
enum class EAttribStorageType : int64
{
	Invalid = -1,
	INT,
	INT64,
	FLOAT,
	FLOAT64,
	STRING,
};
