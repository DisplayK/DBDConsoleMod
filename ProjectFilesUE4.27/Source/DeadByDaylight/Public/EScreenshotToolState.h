#pragma once

#include "CoreMinimal.h"
#include "EScreenshotToolState.generated.h"

UENUM(BlueprintType)
enum class EScreenshotToolState : uint8
{
	None,
	PrepareBatch,
	GenerateIcons,
	ShaderCompilation,
	GenerateAsset,
	SaveAndCheckout,
	FinishSuccess,
	FinishFail,
	FinishCancel,
};
