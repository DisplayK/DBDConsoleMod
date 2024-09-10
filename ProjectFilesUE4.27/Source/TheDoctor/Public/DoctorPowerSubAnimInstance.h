#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EDoctorAbilityType.h"
#include "EDoctorAbilityPhase.h"
#include "DoctorPowerSubAnimInstance.generated.h"

class UDoctorPowerAnimStateComponent;

UCLASS(NonTransient)
class UDoctorPowerSubAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	EDoctorAbilityType _abilityType;

	UPROPERTY(BlueprintReadOnly, Transient)
	EDoctorAbilityPhase _abilityPhase;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isShockTherapyInCooldown;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	TWeakObjectPtr<UDoctorPowerAnimStateComponent> _powerStateComponent;

protected:
	UFUNCTION(BlueprintCallable)
	void OnShockTherapyAnimationAttackStop();

	UFUNCTION(BlueprintCallable)
	void OnShockTherapyAnimationAttackStart();

public:
	UDoctorPowerSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDoctorPowerSubAnimInstance) { return 0; }
