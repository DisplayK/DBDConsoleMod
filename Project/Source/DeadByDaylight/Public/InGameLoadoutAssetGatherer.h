#pragma once

#include "CoreMinimal.h"
#include "InGameAssetPreloaderGatherer.h"
#include "InGameLoadoutAssetGatherer.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UInGameLoadoutAssetGatherer : public UInGameAssetPreloaderGatherer
{
	GENERATED_BODY()

public:
	UInGameLoadoutAssetGatherer();
};

FORCEINLINE uint32 GetTypeHash(const UInGameLoadoutAssetGatherer) { return 0; }
