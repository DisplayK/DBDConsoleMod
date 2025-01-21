#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "DeathBedAntiCampComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeathBedAntiCampComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _anticampZoneDistance;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _anticampZoneTimeToTrigger;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TriggerDeathBedRelocate();

	UFUNCTION()
	void Authority_OnInRangeChanged(const bool inRange);

public:
	UDeathBedAntiCampComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDeathBedAntiCampComponent) { return 0; }
