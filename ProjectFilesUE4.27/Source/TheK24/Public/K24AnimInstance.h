#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K24AnimInstance.generated.h"

UCLASS(NonTransient)
class UK24AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Transient)
	bool _isInPowerMode;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Transient)
	bool _isChargingPower;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Transient)
	bool _isK24PowerAttacking;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Transient)
	bool _isRequestingPowerAttack;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Transient)
	int32 _powerLevel;

private:
	UFUNCTION()
	void OnKillerPowerLevelChanged(int32 powerLevel);

public:
	UK24AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK24AnimInstance) { return 0; }
