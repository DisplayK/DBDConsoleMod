#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem.h"
#include "AISkill_InteractionUseItem_K29StabilizingSprayOther.generated.h"

UCLASS(EditInlineNew)
class UAISkill_InteractionUseItem_K29StabilizingSprayOther : public UAISkill_InteractionUseItem
{
	GENERATED_BODY()

public:
	UAISkill_InteractionUseItem_K29StabilizingSprayOther();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_K29StabilizingSprayOther) { return 0; }
