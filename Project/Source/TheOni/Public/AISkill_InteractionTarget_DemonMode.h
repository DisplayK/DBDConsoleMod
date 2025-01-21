#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AISkill_InteractionTarget_DemonMode.generated.h"

UCLASS(EditInlineNew)
class UAISkill_InteractionTarget_DemonMode : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_DemonMode();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_DemonMode) { return 0; }
