#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "AIRoll.h"
#include "AISkill_SkillCheck.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_SkillCheck : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAIRoll BaseRegularZoneRoll;

	UPROPERTY(EditDefaultsOnly)
	FAIRoll BaseBonusZoneRoll;

	UPROPERTY(EditDefaultsOnly)
	FAIRoll WiggleRegularZoneRoll;

	UPROPERTY(EditDefaultsOnly)
	FAIRoll WiggleBonusZoneRoll;

public:
	UAISkill_SkillCheck();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_SkillCheck) { return 0; }
