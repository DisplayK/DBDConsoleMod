#pragma once

#include "CoreMinimal.h"
#include "EStoreTab.generated.h"

UENUM(BlueprintType)
enum class EStoreTab : uint8
{
	Featured,
	Characters,
	Currency,
	ShrineOfSecrets,
	TabCount,
};
