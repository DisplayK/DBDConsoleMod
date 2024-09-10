#pragma once

#include "CoreMinimal.h"
#include "Components/CanvasPanelSlot.h"
#include "DisplayStandViewData.generated.h"

USTRUCT(BlueprintType)
struct FDisplayStandViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FAnchorData Anchors;

	UPROPERTY(BlueprintReadWrite)
	float PositionX;

	UPROPERTY(BlueprintReadWrite)
	float PositionY;

	UPROPERTY(BlueprintReadWrite)
	float SizeX;

	UPROPERTY(BlueprintReadWrite)
	float SizeY;

public:
	DBDUIVIEWINTERFACES_API FDisplayStandViewData();
};

FORCEINLINE uint32 GetTypeHash(const FDisplayStandViewData) { return 0; }
