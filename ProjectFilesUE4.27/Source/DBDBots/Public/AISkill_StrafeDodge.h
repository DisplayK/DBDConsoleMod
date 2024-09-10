#pragma once

#include "CoreMinimal.h"
#include "AISkill_Strafe.h"
#include "AIRoll.h"
#include "AISkill_StrafeDodge.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_StrafeDodge : public UAISkill_Strafe
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAIRoll StartRoll;

public:
	UAISkill_StrafeDodge();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_StrafeDodge) { return 0; }
