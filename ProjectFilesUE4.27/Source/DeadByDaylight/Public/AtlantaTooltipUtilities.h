#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaTooltipUtilities.generated.h"

UCLASS(BlueprintType)
class UAtlantaTooltipUtilities : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static bool TryCloseActiveTooltip();

public:
	UAtlantaTooltipUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaTooltipUtilities) { return 0; }
