#pragma once

#include "CoreMinimal.h"
#include "SelectedOffering.h"
#include "OfferingData.generated.h"

USTRUCT(BlueprintType)
struct FOfferingData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool OfferingReady;

	UPROPERTY()
	TArray<FSelectedOffering> Offerings;

public:
	DEADBYDAYLIGHT_API FOfferingData();
};

FORCEINLINE uint32 GetTypeHash(const FOfferingData) { return 0; }
