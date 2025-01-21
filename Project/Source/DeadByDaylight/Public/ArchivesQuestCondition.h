#pragma once

#include "CoreMinimal.h"
#include "ArchivesQuestCondition.generated.h"

USTRUCT()
struct FArchivesQuestCondition
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Key;

	UPROPERTY()
	TArray<FString> Value;

public:
	DEADBYDAYLIGHT_API FArchivesQuestCondition();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesQuestCondition) { return 0; }
