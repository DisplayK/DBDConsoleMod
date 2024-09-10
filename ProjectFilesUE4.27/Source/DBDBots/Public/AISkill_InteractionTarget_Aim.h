#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AISkill_InteractionTarget_Aim.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_Aim : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_Aim();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_Aim) { return 0; }
