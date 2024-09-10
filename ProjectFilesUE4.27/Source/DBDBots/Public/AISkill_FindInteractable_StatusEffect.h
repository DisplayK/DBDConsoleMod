#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AISkill_FindInteractable.h"
#include "AISkill_FindInteractable_StatusEffect.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_StatusEffect : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag RequiredPerkFlag;

	UPROPERTY(EditDefaultsOnly)
	bool InvertCondition;

public:
	UAISkill_FindInteractable_StatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_StatusEffect) { return 0; }
