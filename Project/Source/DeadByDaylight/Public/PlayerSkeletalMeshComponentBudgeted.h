#pragma once

#include "CoreMinimal.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "PlayerSkeletalMeshComponentBudgeted.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerSkeletalMeshComponentBudgeted : public UDBDSkeletalMeshComponentBudgeted
{
	GENERATED_BODY()

public:
	UPlayerSkeletalMeshComponentBudgeted();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerSkeletalMeshComponentBudgeted) { return 0; }
