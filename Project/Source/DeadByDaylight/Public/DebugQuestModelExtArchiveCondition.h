#pragma once

#include "CoreMinimal.h"
#include "DebugQuestModelExtArchiveCondition.generated.h"

USTRUCT()
struct FDebugQuestModelExtArchiveCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString Key;

	UPROPERTY(EditAnywhere)
	TArray<FString> Value;

public:
	DEADBYDAYLIGHT_API FDebugQuestModelExtArchiveCondition();
};

FORCEINLINE uint32 GetTypeHash(const FDebugQuestModelExtArchiveCondition) { return 0; }
