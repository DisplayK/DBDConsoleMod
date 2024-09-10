#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "ClonedSkeletalMeshComponent.generated.h"

UCLASS(Transient, EditInlineNew, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UClonedSkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:
	UClonedSkeletalMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UClonedSkeletalMeshComponent) { return 0; }
