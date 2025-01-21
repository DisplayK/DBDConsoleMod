#pragma once

#include "CoreMinimal.h"
#include "EModifierOperationStrategy.h"
#include "GameplayTagContainer.h"
#include "EModifierCompoundStrategy.h"
#include "StatModifier.generated.h"

USTRUCT()
struct FStatModifier
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	EModifierOperationStrategy OperationStrategy;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag ModifierTag;

	UPROPERTY(EditDefaultsOnly)
	EModifierCompoundStrategy CompoundStrategy;

public:
	STATSYSTEM_API FStatModifier();
};

FORCEINLINE uint32 GetTypeHash(const FStatModifier) { return 0; }
