#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DataTableDropdown.h"
#include "AISkill_Interaction.h"
#include "AISkill_Interaction_InLocker.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_InLocker : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FDataTableDropdown PerkID;

	UPROPERTY(EditAnywhere)
	FGameplayTag CooldownTag;

	UPROPERTY(EditAnywhere)
	float InitialRunningTime;

	UPROPERTY(EditAnywhere)
	bool StartRefreshingTime;

	UPROPERTY(EditAnywhere)
	float RefreshTimeMargin;

	UPROPERTY(EditAnywhere)
	float RefreshTimeAmount;

public:
	UAISkill_Interaction_InLocker();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_InLocker) { return 0; }
