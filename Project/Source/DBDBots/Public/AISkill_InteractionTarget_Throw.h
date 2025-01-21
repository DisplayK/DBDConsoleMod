#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AITunableParameter.h"
#include "EAIThrowPredictionModes.h"
#include "EAIThrowProjectileModes.h"
#include "AISkill_InteractionTarget_Throw.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_Throw : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	EAIThrowPredictionModes ThrowPredictionMode;

	UPROPERTY(EditDefaultsOnly)
	int32 MaxAddPitchAngle;

	UPROPERTY(EditDefaultsOnly)
	EAIThrowProjectileModes ThrowProjectileMode;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter HoldInputTimeRandDeviation;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter PitchAngleRandDeviation;

public:
	UAISkill_InteractionTarget_Throw();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_Throw) { return 0; }
