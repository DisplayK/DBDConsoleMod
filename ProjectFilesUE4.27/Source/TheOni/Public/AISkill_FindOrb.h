#pragma once

#include "CoreMinimal.h"
#include "AISkill_Find.h"
#include "AISkill_FindOrb.generated.h"

UCLASS(EditInlineNew)
class UAISkill_FindOrb : public UAISkill_Find
{
	GENERATED_BODY()

public:
	UAISkill_FindOrb();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindOrb) { return 0; }
