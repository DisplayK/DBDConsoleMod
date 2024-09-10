#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionTarget_Stalk.h"
#include "AISkill_InteractionTarget_StalkShape.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget_StalkShape : public UAISkill_InteractionTarget_Stalk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	int32 StalkRangeLimitedAtEvilTier;

	UPROPERTY(EditDefaultsOnly)
	float MaxStalkRangeWhenLimitedByEvilTier;

public:
	UAISkill_InteractionTarget_StalkShape();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget_StalkShape) { return 0; }
