#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SurvivorActivity.generated.h"

USTRUCT(BlueprintType)
struct FSurvivorActivity
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool ShouldDisplayProgress;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FGameplayTag> TagsAssociatedWithAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag ActivityType;

public:
	DEADBYDAYLIGHT_API FSurvivorActivity();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorActivity) { return 0; }
