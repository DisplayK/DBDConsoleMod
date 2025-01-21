#pragma once

#include "CoreMinimal.h"
#include "EServerUseNetAsyncLoading.generated.h"

UENUM(BlueprintType)
enum class EServerUseNetAsyncLoading : uint8
{
	NotSet,
	Yes,
	No,
};
