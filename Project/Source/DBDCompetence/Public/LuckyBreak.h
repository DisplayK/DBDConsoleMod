#pragma once

#include "CoreMinimal.h"
#include "SpeedBasedNetSyncedValue.h"
#include "Perk.h"
#include "ECamperDamageState.h"
#include "LuckyBreak.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API ULuckyBreak : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _maxActivationTime;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _minActivationTime;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _healingTimeToActivationTimeRatio;

	UPROPERTY(Replicated)
	bool _isRecharging;

	UPROPERTY(Replicated)
	FSpeedBasedNetSyncedValue _activationTime;

private:
	UFUNCTION()
	void Authority_TryActivatePerk();

	UFUNCTION()
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

	UFUNCTION()
	void ActivationTimerEnded();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULuckyBreak();
};

FORCEINLINE uint32 GetTypeHash(const ULuckyBreak) { return 0; }
