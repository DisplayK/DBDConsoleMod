#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "IterativeWeightAdjustmentStrategy.h"
#include "TelevisionIterativeWeightAdjustmentStrategy.generated.h"

class UCurveFloat;
class USceneComponent;
class UActorSpawner;

UCLASS(Abstract)
class UTelevisionIterativeWeightAdjustmentStrategy : public UIterativeWeightAdjustmentStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<USceneComponent*> _unmatchedGenerators;

	UPROPERTY(Transient, Export)
	TArray<UActorSpawner*> _selectedSpawners;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _penaltyFromDistanceToClosestTelevision;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _penaltyFromDistanceToClosestTelevisionWhenGeneratorHasOtherTelevisionNearby;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _scoreFromDistanceFromClosestGenerator;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _generatorCloseToTelevisionDistanceThreshold;

public:
	UTelevisionIterativeWeightAdjustmentStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTelevisionIterativeWeightAdjustmentStrategy) { return 0; }
