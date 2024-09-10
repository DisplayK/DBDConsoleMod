#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem_FirecrackerLike.h"
#include "AISkill_InteractionUseItem_Firecracker.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionUseItem_Firecracker : public UAISkill_InteractionUseItem_FirecrackerLike
{
	GENERATED_BODY()

public:
	UAISkill_InteractionUseItem_Firecracker();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_Firecracker) { return 0; }
