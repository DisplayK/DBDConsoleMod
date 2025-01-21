#pragma once

#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "UObject/SoftObjectPtr.h"
#include "GameplayElementsPopulation.generated.h"

class UIterativeWeightAdjustmentStrategy;
class AActor;

USTRUCT(BlueprintType)
struct FGameplayElementsPopulation
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	EGameplayElementType Type;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<AActor> GameplayElementBlueprint;

	UPROPERTY(EditAnywhere)
	int32 MinPopulation;

	UPROPERTY(EditAnywhere)
	int32 MaxPopulation;

	UPROPERTY(EditAnywhere)
	int32 MinGuaranteePopulation;

	UPROPERTY(EditAnywhere)
	int32 SpawnPass;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UIterativeWeightAdjustmentStrategy> IterativeWeightAdjustmentStrategyClass;

public:
	DEADBYDAYLIGHT_API FGameplayElementsPopulation();
};

FORCEINLINE uint32 GetTypeHash(const FGameplayElementsPopulation) { return 0; }
