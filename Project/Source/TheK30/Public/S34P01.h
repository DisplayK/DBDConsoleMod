#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SecondaryInteractionProperties.h"
#include "ECamperDamageState.h"
#include "TagStateBool.h"
#include "ESkillCheckCustomType.h"
#include "S34P01.generated.h"

class UChargeStrategy;
class UChargeableInteractionDefinition;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK30_API US34P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Export)
	UChargeStrategy* _chargeStrategyWhenActive;

	UPROPERTY(Export)
	UChargeableInteractionDefinition* _redirectedInteraction;

	UPROPERTY(EditDefaultsOnly)
	FSecondaryInteractionProperties _startAccumulateSecondaryActionProperties;

	UPROPERTY(EditDefaultsOnly)
	FSecondaryInteractionProperties _useTokensSecondaryActionProperties;

	UPROPERTY(ReplicatedUsing=OnRep_IsPerkActive)
	bool _isPerkActive;

	UPROPERTY(ReplicatedUsing=OnRep_IsAccumulatingTokens)
	FTagStateBool _isAccumulatingTokens;

	UPROPERTY(EditDefaultsOnly)
	float _initialCountdownTime;

	UPROPERTY(EditDefaultsOnly)
	float _accumulatedPercentMultiplier;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_AbilityTwoPressed(bool isPressed);

	UFUNCTION()
	void OnRep_IsPerkActive();

	UFUNCTION()
	void OnRep_IsAccumulatingTokens();

	UFUNCTION()
	void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnUseTokens();

public:
	UFUNCTION(BlueprintPure)
	bool IsPerkActive() const;

	UFUNCTION(BlueprintPure)
	float GetInitialCountdownAtLevel() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnUseCharge(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStopChargingPerk(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartChargingPerk(ADBDPlayer* owningPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFullCharge(ADBDPlayer* owningPlayer);

private:
	UFUNCTION()
	void Authority_OnSkillCheckResponse(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange);

public:
	UFUNCTION()
	void Authority_OnAccumulateRedirectedCharge(const float chargeAmount, const float maxCharge);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US34P01();
};

FORCEINLINE uint32 GetTypeHash(const US34P01) { return 0; }
