#pragma once

#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "ManagedGameplayElementData.generated.h"

class UActorSpawner;

USTRUCT(BlueprintType)
struct FManagedGameplayElementData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<UActorSpawner*> ActivatedSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<UActorSpawner*> RemovedSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EGameplayElementType PopulationType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CurrentPopulationCost;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 MaxPopulationCost;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 MinPopulationCost;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MapWidth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinProximityBetweenElements;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MinDistSqrBetweenElements;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float TileWidth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FactorToAdjustToWhenOutOfProximity;

public:
	DEADBYDAYLIGHT_API FManagedGameplayElementData();
};

FORCEINLINE uint32 GetTypeHash(const FManagedGameplayElementData) { return 0; }
