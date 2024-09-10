#pragma once

#include "CoreMinimal.h"
#include "TOPWorkResultObject.h"
#include "TOPWorkResult.generated.h"

USTRUCT()
struct FTOPWorkResult
{
	GENERATED_BODY()

public:
	UPROPERTY(NonTransactional)
	int32 WorkItemIndex;

	UPROPERTY(Transient)
	int32 WorkItemID;

	UPROPERTY(NonTransactional)
	TArray<FTOPWorkResultObject> ResultObjects;

public:
	HOUDINIENGINERUNTIME_API FTOPWorkResult();
};

FORCEINLINE uint32 GetTypeHash(const FTOPWorkResult) { return 0; }
