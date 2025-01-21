#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget.h"
#include "AISkill_InteractionTarget_Dash.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_Dash : public UAISkill_InteractionTarget
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_Dash();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_Dash) { return 0; }
