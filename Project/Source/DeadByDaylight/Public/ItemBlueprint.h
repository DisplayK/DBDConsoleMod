#pragma once

#include "CoreMinimal.h"
#include "SkeletalMeshActorBudgeted.h"
#include "ItemBlueprint.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AItemBlueprint : public ASkeletalMeshActorBudgeted
{
	GENERATED_BODY()

public:
	AItemBlueprint();
};

FORCEINLINE uint32 GetTypeHash(const AItemBlueprint) { return 0; }
