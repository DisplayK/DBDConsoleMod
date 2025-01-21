#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AISkill_InteractionTarget_TormentMode.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_TormentMode : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float ChasedTargetToEvadePointMaxDistance;

	UPROPERTY(EditDefaultsOnly)
	float StartTormentInPatrolAboveChargeRatio;

	UPROPERTY(EditDefaultsOnly)
	float StartTormentInChaseAboveChargeRatio;

public:
	UAISkill_InteractionTarget_TormentMode();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_TormentMode) { return 0; }
