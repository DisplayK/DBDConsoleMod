#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "EWallGrabState.h"
#include "BlightAnimInstance.generated.h"

class UBlightPowerStateComponent;

UCLASS(NonTransient)
class UBlightAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UBlightPowerStateComponent* _blightPowerStateComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EWallGrabState _powerState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _stateTimeRemaining;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lookAngle;

public:
	UBlightAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UBlightAnimInstance) { return 0; }
