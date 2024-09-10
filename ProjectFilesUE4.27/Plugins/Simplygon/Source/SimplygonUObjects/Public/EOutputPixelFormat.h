#pragma once

#include "CoreMinimal.h"
#include "EOutputPixelFormat.generated.h"

UENUM(BlueprintType)
enum class EOutputPixelFormat : uint8
{
	R8G8B8A8,
	R8G8B8,
	R8,
	R16G16B16A16,
	R16G16B16,
	R16,
	R32G32B32A32F,
};
