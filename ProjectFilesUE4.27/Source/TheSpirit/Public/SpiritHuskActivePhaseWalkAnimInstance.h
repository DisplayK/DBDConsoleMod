#pragma once

#include "CoreMinimal.h"
#include "SpiritHuskAnimInstance.h"
#include "SpiritHuskActivePhaseWalkAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class USpiritHuskActivePhaseWalkAnimInstance : public USpiritHuskAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	float _elapsedTimeSinceFakingRealKillerPose;

	UPROPERTY(BlueprintReadOnly, Transient)
	float _idleAnimationExplicitTime;

private:
	UPROPERTY(EditDefaultsOnly)
	UAnimSequence* _idleAnimationSequence;

public:
	USpiritHuskActivePhaseWalkAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USpiritHuskActivePhaseWalkAnimInstance) { return 0; }
