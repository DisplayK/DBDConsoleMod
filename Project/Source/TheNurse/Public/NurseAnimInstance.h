#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Templates/SubclassOf.h"
#include "NurseAnimInstance.generated.h"

class ASlasherPlayer;
class UAnimSequence;
class UAnimEffectHandler;

UCLASS(NonTransient)
class UNurseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isBlinkReady;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isChargingBlink;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isFullyCharged;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _blinkSequence;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isChainBlinking;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isBlinking;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _blinkPlayRate;

	UPROPERTY(EditAnywhere)
	UAnimSequence* _cooldownSequence;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isInCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _cooldownPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isChainBlinkAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isNurse;

private:
	UPROPERTY(Transient)
	UAnimEffectHandler* _animEffectHandlerForSFX;

	UPROPERTY(Transient)
	UAnimEffectHandler* _animEffectHandlerForVFX;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForSFX;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimEffectHandler> _animEffectHandlerClassForVFX;

	UPROPERTY()
	ASlasherPlayer* _mySlasher;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnBlinkTriggered();

public:
	UNurseAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UNurseAnimInstance) { return 0; }
