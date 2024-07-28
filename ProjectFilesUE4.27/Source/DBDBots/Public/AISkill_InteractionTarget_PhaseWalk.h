#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AISkill_InteractionTarget_PhaseWalk.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_PhaseWalk : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_PhaseWalk();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_PhaseWalk) { return 0; }
