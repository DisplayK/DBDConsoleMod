#pragma once

#include "CoreMinimal.h"
#include "EScreenType.generated.h"

UENUM(BlueprintType)
enum class EScreenType : uint8
{
	eScaleformScreen,
	eUMGScreen,
	eMixedScaleformUMG,
};
