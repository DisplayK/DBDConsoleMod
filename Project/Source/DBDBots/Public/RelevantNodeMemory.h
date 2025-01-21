#pragma once

#include "CoreMinimal.h"
#include "RelevantNodeMemory.generated.h"

class UBTNode;

USTRUCT(BlueprintType)
struct FRelevantNodeMemory
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UBTNode* Node;

public:
	DBDBOTS_API FRelevantNodeMemory();
};

FORCEINLINE uint32 GetTypeHash(const FRelevantNodeMemory) { return 0; }
