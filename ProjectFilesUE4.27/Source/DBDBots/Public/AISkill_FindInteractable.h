#pragma once

#include "CoreMinimal.h"
#include "AISkill_Find.h"
#include "EInputInteractionType.h"
#include "AISkill_FindInteractable.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable : public UAISkill_Find
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FString RequiredInteractionId;

	UPROPERTY(EditDefaultsOnly)
	EInputInteractionType RequiredInteractionInputType;

public:
	UAISkill_FindInteractable();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable) { return 0; }
