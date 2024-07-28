#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TormentTrailPointCollectionComponent.generated.h"

class ATormentTrailPoint;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTormentTrailPointCollectionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _maxNumberOfTrailPointInGame;

private:
	UFUNCTION()
	void OnTrailAcquireChanged(ATormentTrailPoint* trailPoint, bool value);

public:
	UTormentTrailPointCollectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTormentTrailPointCollectionComponent) { return 0; }
