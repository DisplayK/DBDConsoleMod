#pragma once

#include "CoreMinimal.h"
#include "EOutputDDSCompressionType.generated.h"

UENUM(BlueprintType)
enum class EOutputDDSCompressionType : uint8
{
	NoCompression = 255,
	BC1 = 0,
	BC2,
	BC3,
	BC4,
	BC5,
};
