#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "WeightedItem.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWeightedItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> Element;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

public:
	DEADBYDAYLIGHT_API FWeightedItem();
};

FORCEINLINE uint32 GetTypeHash(const FWeightedItem) { return 0; }
