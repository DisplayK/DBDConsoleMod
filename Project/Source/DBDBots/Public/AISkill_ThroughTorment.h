#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "EAITerrorLevel.h"
#include "AISkill_ThroughTorment.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_ThroughTorment : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	EAITerrorLevel ToleratedTerrorPressure;

public:
	UAISkill_ThroughTorment();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_ThroughTorment) { return 0; }
