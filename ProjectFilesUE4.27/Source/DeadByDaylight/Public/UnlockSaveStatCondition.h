#pragma once

#include "CoreMinimal.h"
#include "UnlockSaveStatCondition.generated.h"

USTRUCT(BlueprintType)
struct FUnlockSaveStatCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName StatName;

	UPROPERTY(EditAnywhere)
	float ValueRequired;

	UPROPERTY(EditAnywhere)
	bool isCharacterSpecific;

public:
	DEADBYDAYLIGHT_API FUnlockSaveStatCondition();
};

FORCEINLINE uint32 GetTypeHash(const FUnlockSaveStatCondition) { return 0; }
