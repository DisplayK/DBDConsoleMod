#pragma once

#include "CoreMinimal.h"
#include "BaseLoadoutPartViewData.h"
#include "EItemAvailability.h"
#include "OfferingViewData.generated.h"

USTRUCT(BlueprintType)
struct FOfferingViewData: public FBaseLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StackCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemAvailability Availability;

public:
	DBDUIVIEWINTERFACES_API FOfferingViewData();
};

FORCEINLINE uint32 GetTypeHash(const FOfferingViewData) { return 0; }
