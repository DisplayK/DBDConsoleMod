#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "AISkill_Interaction_OrbAbsorb.generated.h"

UCLASS(EditInlineNew)
class UAISkill_Interaction_OrbAbsorb : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UAISkill_Interaction_OrbAbsorb();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_OrbAbsorb) { return 0; }
