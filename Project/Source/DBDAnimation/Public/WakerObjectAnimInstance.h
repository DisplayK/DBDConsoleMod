#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "WakerObjectAnimInstance.generated.h"

class AWakerObject;

UCLASS(NonTransient)
class DBDANIMATION_API UWakerObjectAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _reappearTimerCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	float _wakeUpCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _chargeStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _interactionComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _outEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _reset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _inEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _wakerObjectStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _respawnEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _cancelEnd;

private:
	UFUNCTION(BlueprintCallable)
	void ResetReappearTimer();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnReappear();

private:
	UFUNCTION(BlueprintPure)
	bool GetWakerObjectStarted() const;

	UFUNCTION(BlueprintPure)
	bool GetWakerObjectChargeComplete() const;

	UFUNCTION(BlueprintPure)
	float GetWakerObjectCharge() const;

	UFUNCTION(BlueprintPure)
	AWakerObject* GetWakerObject() const;

public:
	UWakerObjectAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UWakerObjectAnimInstance) { return 0; }
