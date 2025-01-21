#pragma once

#include "CoreMinimal.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "DBDSkeletalMeshComponentBudgeted.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDANIMATIONBUDGETALLOCATOR_API UDBDSkeletalMeshComponentBudgeted : public USkeletalMeshComponentBudgeted
{
	GENERATED_BODY()

public:
	UDBDSkeletalMeshComponentBudgeted();
};

FORCEINLINE uint32 GetTypeHash(const UDBDSkeletalMeshComponentBudgeted) { return 0; }
