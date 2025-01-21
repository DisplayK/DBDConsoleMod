#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GamePlayModifier.generated.h"

USTRUCT(BlueprintType)
struct FGamePlayModifier
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ModifierValue;

public:
	COMPETENCE_API FGamePlayModifier();
};

FORCEINLINE uint32 GetTypeHash(const FGamePlayModifier) { return 0; }
