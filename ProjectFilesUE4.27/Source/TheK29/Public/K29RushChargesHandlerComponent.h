#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "K29RushChargesHandlerComponent.generated.h"

class ASlasherPlayer;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29RushChargesHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _maximumRushCharges;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _rechargeTimeByChargesLeft;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _rechargeDurationMultiplier;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _reducedChargeTimePerInfectionPlayers;

private:
	UFUNCTION()
	void SetToFullCharge();

	UFUNCTION()
	void OnMaximumChargesChanged(const float newValue);

	UFUNCTION()
	void OnKillerSet(ASlasherPlayer* killer);

public:
	UFUNCTION(BlueprintPure)
	float GetPercentageRemainingUntilNextCharge() const;

	UFUNCTION(BlueprintPure)
	int32 GetMaximumCharges() const;

	UFUNCTION(BlueprintPure)
	int32 GetAvailableCharges() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnRushChargeAdded();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOutOfRushCharges();

private:
	UFUNCTION()
	void AddSingleCharge();

public:
	UK29RushChargesHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK29RushChargesHandlerComponent) { return 0; }
