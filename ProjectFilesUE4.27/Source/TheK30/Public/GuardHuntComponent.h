#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "SpeedBasedNetSyncedValue.h"
#include "UObject/NoExportTypes.h"
#include "GuardHuntComponent.generated.h"

class ACamperPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UGuardHuntComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGuardPhaseProgressUpdate, float, completionProgress);

public:
	UPROPERTY(BlueprintAssignable)
	FOnGuardPhaseProgressUpdate OnGuardPhaseProgressUpdate;

private:
	UPROPERTY(EditDefaultsOnly)
	float _maxPathingDetourLength;

	UPROPERTY(EditDefaultsOnly)
	float _distanceBeforeGoingToNextWaypoint;

	UPROPERTY(EditDefaultsOnly)
	float _distanceBeforeGoingToNextWaypointOffNavmesh;

	UPROPERTY(EditDefaultsOnly)
	float _distanceFromLockerToClearWaypoints;

	UPROPERTY(EditDefaultsOnly)
	float _underWaypointZDistance;

	UPROPERTY(Replicated)
	FSpeedBasedNetSyncedValue _huntTimeLeft;

	UPROPERTY(ReplicatedUsing=OnRep_HuntedSurvivor)
	ACamperPlayer* _huntedSurvivor;

	UPROPERTY(ReplicatedUsing=OnRep_HuntStartingLocation)
	FVector _huntStartingLocation;

	UPROPERTY(EditDefaultsOnly)
	float _speedConsideredStuck;

	UPROPERTY(EditDefaultsOnly)
	float _timeStuckToResetPathing;

private:
	UFUNCTION()
	void OnRep_HuntStartingLocation();

	UFUNCTION()
	void OnRep_HuntedSurvivor(ACamperPlayer* previousChasedSurvivor);

public:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetHuntedSurvivor() const;

private:
	UFUNCTION()
	void Authority_OnCamperUnhooked(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION()
	void Authority_OnCamperInjuredOrDowned(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGuardHuntComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGuardHuntComponent) { return 0; }
