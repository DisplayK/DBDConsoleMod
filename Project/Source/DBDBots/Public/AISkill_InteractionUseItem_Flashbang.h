#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem_FirecrackerLike.h"
#include "AISkill_InteractionUseItem_Flashbang.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionUseItem_Flashbang : public UAISkill_InteractionUseItem_FirecrackerLike
{
	GENERATED_BODY()

public:
	UAISkill_InteractionUseItem_Flashbang();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_Flashbang) { return 0; }
