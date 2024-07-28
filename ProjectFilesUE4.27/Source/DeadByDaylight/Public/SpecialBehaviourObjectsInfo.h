#pragma once

#include "CoreMinimal.h"
#include "SpecialBehaviourObjectsInfo.generated.h"

USTRUCT()
struct FSpecialBehaviourObjectsInfo
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName SpecialBehaviourId;

	UPROPERTY()
	int32 AmountRequired;

	UPROPERTY()
	int32 TimesInteractedWith;

public:
	DEADBYDAYLIGHT_API FSpecialBehaviourObjectsInfo();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialBehaviourObjectsInfo) { return 0; }
