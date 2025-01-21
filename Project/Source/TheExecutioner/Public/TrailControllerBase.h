#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "ETrailType.h"
#include "TrailControllerBase.generated.h"

class UAuthoritativePoolableActorComponent;
class ABaseTormentTrailPoint;
class USplineComponent;
class UTormentTrailPointCollectionComponent;

UCLASS(Abstract)
class ATrailControllerBase : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UTormentTrailPointCollectionComponent* _tormentTrailPointCollection;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _distanceBetweenTormentTrailPoint;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	USplineComponent* _splineComponent;

private:
	UPROPERTY(Transient, Export)
	UAuthoritativePoolableActorComponent* _poolableComponent;

	UPROPERTY(EditDefaultsOnly)
	ETrailType _trailType;

protected:
	UFUNCTION(BlueprintCallable)
	void RemoveTormentTrailController();

	UFUNCTION()
	void OnTrailPointDeath(ABaseTormentTrailPoint* baseTrailPoint);

	UFUNCTION()
	void OnAcquireChanged(const bool acquired);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void ActivateCosmetic(const bool value);

public:
	ATrailControllerBase();
};

FORCEINLINE uint32 GetTypeHash(const ATrailControllerBase) { return 0; }
