#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "SecondaryInteractionProperties.h"
#include "DrawPatrolPathInteraction.generated.h"

class UCurveFloat;
class UStatusEffect;
class AInteractable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDrawPatrolPathInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChargeStateChanged, bool, isCharging, bool, isChargeCompleted);

public:
	UPROPERTY(BlueprintAssignable)
	FOnChargeStateChanged OnChargeStateChanged;

private:
	UPROPERTY(EditDefaultsOnly)
	FSecondaryInteractionProperties _giveOrderProperties;

	UPROPERTY(EditDefaultsOnly)
	FSecondaryInteractionProperties _releaseInteractionProperties;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maximumInteractionDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pathLengthWarningPercent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _pathDrawingDurationWarningPercent;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _postPowerHasteClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _postPowerHasteValue;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _hasteDurationByPathLength;

protected:
	UFUNCTION(BlueprintCallable)
	void SetIsCharging(bool isCharging);

	UFUNCTION(Server, Reliable)
	void Server_StartPatrol();

	UFUNCTION(Server, Reliable)
	void Server_SendOrder(AInteractable* target);

private:
	UFUNCTION()
	void OnCancellationTimerCompleted();

public:
	UFUNCTION(BlueprintPure)
	bool IsCharging() const;

	UFUNCTION(BlueprintPure)
	bool IsChargeCompleted() const;

public:
	UDrawPatrolPathInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDrawPatrolPathInteraction) { return 0; }
