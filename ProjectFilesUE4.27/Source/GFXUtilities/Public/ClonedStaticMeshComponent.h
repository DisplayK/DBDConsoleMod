#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ClonedStaticMeshComponent.generated.h"

UCLASS(Transient, EditInlineNew, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UClonedStaticMeshComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	UClonedStaticMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UClonedStaticMeshComponent) { return 0; }
