#pragma once

#include "CoreMinimal.h"
#include "BatchMeshCommands.h"
#include "MeshCloningFactory.generated.h"

UCLASS(Transient, NotPlaceable, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UMeshCloningFactory : public UBatchMeshCommands
{
	GENERATED_BODY()

public:
	UMeshCloningFactory();
};

FORCEINLINE uint32 GetTypeHash(const UMeshCloningFactory) { return 0; }
