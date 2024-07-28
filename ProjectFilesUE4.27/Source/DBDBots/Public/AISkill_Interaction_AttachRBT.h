#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "AISkill_Interaction_AttachRBT.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_AttachRBT : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UAISkill_Interaction_AttachRBT();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_AttachRBT) { return 0; }
