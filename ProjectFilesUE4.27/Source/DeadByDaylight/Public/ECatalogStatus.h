#pragma once

#include "CoreMinimal.h"
#include "ECatalogStatus.generated.h"

UENUM(BlueprintType)
enum class ECatalogStatus : uint8
{
	NotReady,
	Updating,
	Fetched,
};
