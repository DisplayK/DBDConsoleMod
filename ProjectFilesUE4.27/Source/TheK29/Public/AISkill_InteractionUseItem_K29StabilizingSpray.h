#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem.h"
#include "AISkill_InteractionUseItem_K29StabilizingSpray.generated.h"

UCLASS(EditInlineNew)
class UAISkill_InteractionUseItem_K29StabilizingSpray : public UAISkill_InteractionUseItem
{
	GENERATED_BODY()

public:
	UAISkill_InteractionUseItem_K29StabilizingSpray();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_K29StabilizingSpray) { return 0; }
