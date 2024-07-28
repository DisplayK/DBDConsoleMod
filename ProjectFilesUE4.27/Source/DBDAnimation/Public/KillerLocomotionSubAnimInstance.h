#pragma once

#include "CoreMinimal.h"
#include "BaseKillerAnimInstance.h"
#include "EIntroState.h"
#include "TagStateBool.h"
#include "KillerLocomotionSubAnimInstance.generated.h"

class UAnimSequence;
class UBlendSpace1D;

UCLASS(NonTransient)
class DBDANIMATION_API UKillerLocomotionSubAnimInstance : public UBaseKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _landLightTPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _landLightFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlendSpace1D* _BSLandTPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlendSpace1D* _BSLandFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _walkToFallTPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _walkToFallFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _carryIdleTPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _carryIdleFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _fallingTPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _fallingFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _landLight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlendSpace1D* _BSLand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _walkToFall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _carryIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _falling;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isVaultingToFall;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	EIntroState _introState;

private:
	UPROPERTY(Transient)
	FTagStateBool _isVaultingToFallState;

public:
	UKillerLocomotionSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UKillerLocomotionSubAnimInstance) { return 0; }
