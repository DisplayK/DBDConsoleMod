#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget_DashAttack.h"
#include "AISkill_InteractionTarget_DashAttack_Chainsaw.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_DashAttack_Chainsaw : public UAISkill_InteractionTarget_DashAttack
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_DashAttack_Chainsaw();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_DashAttack_Chainsaw) { return 0; }
