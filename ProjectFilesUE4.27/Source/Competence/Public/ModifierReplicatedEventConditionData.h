#pragma once

#include "CoreMinimal.h"
#include "ModifierReplicatedEventConditionData.generated.h"

class UEventDrivenModifierCondition;

USTRUCT(BlueprintType)
struct FModifierReplicatedEventConditionData
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	UEventDrivenModifierCondition* EventDrivenCondition;

	UPROPERTY()
	bool HasCondition;

	UPROPERTY()
	bool AuthorityDataSet;

public:
	COMPETENCE_API FModifierReplicatedEventConditionData();
};

FORCEINLINE uint32 GetTypeHash(const FModifierReplicatedEventConditionData) { return 0; }
