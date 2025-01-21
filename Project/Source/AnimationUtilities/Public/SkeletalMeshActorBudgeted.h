#pragma once

#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "SkeletalMeshActorBudgeted.generated.h"

UCLASS()
class ANIMATIONUTILITIES_API ASkeletalMeshActorBudgeted : public ASkeletalMeshActor
{
	GENERATED_BODY()

public:
	ASkeletalMeshActorBudgeted();
};

FORCEINLINE uint32 GetTypeHash(const ASkeletalMeshActorBudgeted) { return 0; }
