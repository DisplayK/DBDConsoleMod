#pragma once

#include "CoreMinimal.h"
#include "DBDAnimBudgetAllocatorComponentData.generated.h"

class USkeletalMeshComponentBudgeted;

USTRUCT()
struct FDBDAnimBudgetAllocatorComponentData
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	USkeletalMeshComponentBudgeted* Component;

	UPROPERTY(Export)
	TArray<USkeletalMeshComponentBudgeted*> ChildrenComponents;

public:
	DBDANIMATIONBUDGETALLOCATOR_API FDBDAnimBudgetAllocatorComponentData();
};

FORCEINLINE uint32 GetTypeHash(const FDBDAnimBudgetAllocatorComponentData) { return 0; }
