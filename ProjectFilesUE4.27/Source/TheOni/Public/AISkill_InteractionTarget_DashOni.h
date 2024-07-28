#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget_Dash.h"
#include "AISkill_InteractionTarget_DashOni.generated.h"

UCLASS(EditInlineNew)
class UAISkill_InteractionTarget_DashOni : public UAISkill_InteractionTarget_Dash
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_DashOni();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_DashOni) { return 0; }
