#pragma once

#include "CoreMinimal.h"
#include "EInputInteractionType.h"
#include "PerkInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FPerkInitializationData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 PerkLevel;

	UPROPERTY()
	EInputInteractionType ActivatableInteractionInputType;

	UPROPERTY()
	bool AuthorityDataSet;

public:
	DEADBYDAYLIGHT_API FPerkInitializationData();
};

FORCEINLINE uint32 GetTypeHash(const FPerkInitializationData) { return 0; }
