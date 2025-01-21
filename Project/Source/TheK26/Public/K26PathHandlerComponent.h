#pragma once

#include "CoreMinimal.h"
#include "K26PathData.h"
#include "K26Path.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K26PathHandlerComponent.generated.h"

class UK26AmmoHandlerComponent;
class AActor;
class UK26CrowPlacementValidatorComponent;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26PathHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxPathDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _survivorPathVisibilityTimeOnFire;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _defaultProjectileDistanceFromFloor;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxPathIterations;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxGroundSearchingDistance;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> _visualPathPart;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> _visualPathEndArrow;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _projectileSummonDistance;

	UPROPERTY(Transient, Export)
	UK26AmmoHandlerComponent* _ammoHandler;

	UPROPERTY(Transient, Export)
	UK26CrowPlacementValidatorComponent* _placementValidator;

	UPROPERTY(ReplicatedUsing=OnRep_AvailablePathData, Transient)
	TArray<FK26PathData> _availablePathData;

	UPROPERTY(Transient)
	TArray<FK26Path> _availablePaths;

public:
	UFUNCTION(BlueprintCallable)
	void SetDependencies(UK26AmmoHandlerComponent* ammoHandler, UK26CrowPlacementValidatorComponent* placementValidator);

private:
	UFUNCTION()
	void OnRep_AvailablePathData();

	UFUNCTION()
	void OnIterativeAvailablePathUpdate();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_FillAvailablePathArray(const int32 maxAmmo);

	UFUNCTION()
	void Authority_OnMaxAmmoSet(const int32 maxAmmo);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK26PathHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK26PathHandlerComponent) { return 0; }
