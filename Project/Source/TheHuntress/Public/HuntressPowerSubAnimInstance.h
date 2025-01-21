#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HuntressPowerSubAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class UHuntressPowerSubAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _powerIsActive;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _powerIsReleased;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _powerIsCancelled;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _powerIsInCooldown;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _aimingPlayRate;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _launchPlayRate;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _cancelPlayRate;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _cooldownPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _aimingAnimationSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _launchAnimationSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _cancelAnimationSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _cooldownAnimationSequence;

public:
	UHuntressPowerSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UHuntressPowerSubAnimInstance) { return 0; }
