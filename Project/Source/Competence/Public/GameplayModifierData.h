#pragma once

#include "CoreMinimal.h"
#include "GamePlayModifier.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "GameplayModifierData.generated.h"

class UBaseModifierCondition;

USTRUCT(BlueprintType)
struct FGameplayModifierData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UBaseModifierCondition>> Conditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGamePlayModifier> Modifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> TaggedFlags;

public:
	COMPETENCE_API FGameplayModifierData();
};

FORCEINLINE uint32 GetTypeHash(const FGameplayModifierData) { return 0; }
