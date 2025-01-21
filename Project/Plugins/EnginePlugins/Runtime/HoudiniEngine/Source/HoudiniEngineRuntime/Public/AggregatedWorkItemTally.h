#pragma once

#include "CoreMinimal.h"
#include "WorkItemTallyBase.h"
#include "AggregatedWorkItemTally.generated.h"

USTRUCT()
struct FAggregatedWorkItemTally: public FWorkItemTallyBase
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	int32 TotalWorkItems;

	UPROPERTY()
	int32 WaitingWorkItems;

	UPROPERTY()
	int32 ScheduledWorkItems;

	UPROPERTY()
	int32 CookingWorkItems;

	UPROPERTY()
	int32 CookedWorkItems;

	UPROPERTY()
	int32 ErroredWorkItems;

	UPROPERTY()
	int32 CookCancelledWorkItems;

public:
	HOUDINIENGINERUNTIME_API FAggregatedWorkItemTally();
};

FORCEINLINE uint32 GetTypeHash(const FAggregatedWorkItemTally) { return 0; }
