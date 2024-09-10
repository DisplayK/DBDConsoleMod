#pragma once

#include "CoreMinimal.h"
#include "EOutputImageFileFormat.generated.h"

UENUM(BlueprintType)
enum class EOutputImageFileFormat : uint8
{
	BMP,
	DDS,
	JPEG,
	PNG,
	TGA,
	TIFF,
	EXR = 8,
};
