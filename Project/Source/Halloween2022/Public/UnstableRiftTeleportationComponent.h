#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "EGameplayElementType.h"
#include "UObject/NoExportTypes.h"
#include "UnstableRiftTeleportationComponent.generated.h"

class AUnstableRift;

UCLASS(meta=(BlueprintSpawnableComponent))
class UUnstableRiftTeleportationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _unstableRiftTeleportDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _teleportationVisualsDelay;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minDistanceFromOtherUnstableRifts;

	UPROPERTY(EditDefaultsOnly)
	EGameplayElementType _spawnType;

	UPROPERTY()
	TArray<AUnstableRift*> _allUnstableRifts;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TeleportUnstableRift(const FVector location);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PreTeleportation(const FVector& teleportLocation, const bool hadPlayerInteraction);

	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	UUnstableRiftTeleportationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UUnstableRiftTeleportationComponent) { return 0; }
