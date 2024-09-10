#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "FloatingCameraNavigationComponent.generated.h"

class UObjectPlacerComponent;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UFloatingCameraNavigationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TWeakObjectPtr<UObjectPlacerComponent> _ownerObjectPlacer;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _snappingDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _previewSnappingTime;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _drawPathModeYawInputLimit;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _floatingCameraMaxSpeed;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _floatingCameraAccelerationMultiplier;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _strafeMovementSpeedMultiplier;

	UPROPERTY(Transient)
	TWeakObjectPtr<ADBDPlayer> _playerOwner;

private:
	UFUNCTION(Server, Reliable)
	void Server_EnableWalkOffLegdes(bool isEnabled);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_EnableWalkOffLegdes(bool isEnabled);

public:
	UFloatingCameraNavigationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFloatingCameraNavigationComponent) { return 0; }
