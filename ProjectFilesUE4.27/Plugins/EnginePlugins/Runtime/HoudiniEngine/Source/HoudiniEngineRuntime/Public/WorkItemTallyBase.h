#pragma once

#include "CoreMinimal.h"
#include "WorkItemTallyBase.generated.h"

USTRUCT()
struct FWorkItemTallyBase
{
	GENERATED_BODY()

public:
	HOUDINIENGINERUNTIME_API FWorkItemTallyBase();
};

FORCEINLINE uint32 GetTypeHash(const FWorkItemTallyBase) { return 0; }
