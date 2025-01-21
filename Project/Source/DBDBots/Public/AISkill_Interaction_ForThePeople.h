#pragma once

#include "CoreMinimal.h"
#include "AIIntentionValidatorInterface.h"
#include "AISkill_Interaction.h"
#include "AISkill_Interaction_ForThePeople.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_ForThePeople : public UAISkill_Interaction, public IAIIntentionValidatorInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FString BlockInteractionId;

public:
	UAISkill_Interaction_ForThePeople();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_ForThePeople) { return 0; }
