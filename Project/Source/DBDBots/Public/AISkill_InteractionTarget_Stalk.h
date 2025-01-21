#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AISkill_InteractionTarget_Stalk.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_Stalk : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_Stalk();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_Stalk) { return 0; }
