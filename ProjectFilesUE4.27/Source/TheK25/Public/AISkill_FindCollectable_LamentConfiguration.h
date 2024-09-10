#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AISkill_FindCollectable.h"
#include "AISkill_FindCollectable_LamentConfiguration.generated.h"

UCLASS(EditInlineNew)
class UAISkill_FindCollectable_LamentConfiguration : public UAISkill_FindCollectable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter StopChainHuntGoalWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter PreemptiveFindLamentGoalWeight;

public:
	UAISkill_FindCollectable_LamentConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindCollectable_LamentConfiguration) { return 0; }
