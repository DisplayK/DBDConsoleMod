#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "VariationData.generated.h"

USTRUCT()
struct FVariationData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag Tag;

	UPROPERTY(EditAnywhere)
	FText Name;

public:
	DEADBYDAYLIGHT_API FVariationData();
};

FORCEINLINE uint32 GetTypeHash(const FVariationData) { return 0; }
