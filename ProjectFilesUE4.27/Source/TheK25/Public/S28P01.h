#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "S28P01.generated.h"

class ADBDPlayer;
class UChargeableComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class US28P01 : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _auraRevealDuration;

	UPROPERTY(EditDefaultsOnly)
	float _auraRevealRange;

private:
	UPROPERTY(ReplicatedUsing=OnRep_S28P01ChargeableComponent, Transient, Export)
	UChargeableComponent* _S28P01ChargeableComponent;

	UPROPERTY(ReplicatedUsing=OnRep_IsPerkActive, Transient)
	bool _isPerkActive;

	UPROPERTY(ReplicatedUsing=OnRep_IsInteractionOngoing, Transient)
	bool _isInteractionOngoing;

	UPROPERTY(Transient)
	ADBDPlayer* _playerOwner;

private:
	UFUNCTION()
	void OnRep_S28P01ChargeableComponent();

	UFUNCTION()
	void OnRep_IsPerkActive();

	UFUNCTION()
	void OnRep_IsInteractionOngoing();

	UFUNCTION(BlueprintPure)
	float GetAuraRevealRange() const;

	UFUNCTION(BlueprintPure)
	float GetAuraRevealDuration() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US28P01();
};

FORCEINLINE uint32 GetTypeHash(const US28P01) { return 0; }
