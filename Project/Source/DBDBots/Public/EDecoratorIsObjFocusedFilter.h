#pragma once

#include "CoreMinimal.h"
#include "EDecoratorIsObjFocusedFilter.generated.h"

UENUM(BlueprintType)
enum class EDecoratorIsObjFocusedFilter : uint8
{
	Self,
	SelfNearest,
};
