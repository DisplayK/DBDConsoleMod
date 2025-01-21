#pragma once

#include "CoreMinimal.h"
#include "HudEventProgressionViewData.generated.h"

USTRUCT(BlueprintType)
struct FHudEventProgressionViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProgressBanked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProgressPending;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProgressCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProgressMax;

public:
	DBDUIVIEWINTERFACES_API FHudEventProgressionViewData();
};

FORCEINLINE uint32 GetTypeHash(const FHudEventProgressionViewData) { return 0; }
