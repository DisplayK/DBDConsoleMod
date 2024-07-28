#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction_InLocker.h"
#include "AISkill_Interaction_InLocker_Flashbang.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_InLocker_Flashbang : public UAISkill_Interaction_InLocker
{
	GENERATED_BODY()

public:
	UAISkill_Interaction_InLocker_Flashbang();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_InLocker_Flashbang) { return 0; }
