#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget_Throw.h"
#include "AISkill_InteractionTarget_ThrowToxin.generated.h"

UCLASS(EditInlineNew)
class UAISkill_InteractionTarget_ThrowToxin : public UAISkill_InteractionTarget_Throw
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_ThrowToxin();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_ThrowToxin) { return 0; }
