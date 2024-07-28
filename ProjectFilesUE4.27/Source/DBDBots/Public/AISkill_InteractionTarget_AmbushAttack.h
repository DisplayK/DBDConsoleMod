#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AISkill_InteractionTarget_AmbushAttack.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_AmbushAttack : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_AmbushAttack();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_AmbushAttack) { return 0; }
