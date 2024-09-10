#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget_Dash.h"
#include "AISkill_InteractionTarget_DashHillbilly.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_DashHillbilly : public UAISkill_InteractionTarget_Dash
{
	GENERATED_BODY()

public:
	UAISkill_InteractionTarget_DashHillbilly();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_DashHillbilly) { return 0; }
