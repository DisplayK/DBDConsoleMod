#pragma once

#include "CoreMinimal.h"
#include "PerMeshInstancingData.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT()
struct FPerMeshInstancingData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient, Export)
	TMap<uint32, UInstancedStaticMeshComponent*> gpuCulling_hashToInstancedMeshes;

	UPROPERTY(Transient, Export)
	TMap<uint32, UInstancedStaticMeshComponent*> gpuCullingSwap_hashToInstancedMeshes;

	UPROPERTY(Transient, Export)
	TMap<uint32, UInstancedStaticMeshComponent*> hism_hashToInstancedMeshes;

public:
	DEADBYDAYLIGHT_API FPerMeshInstancingData();
};

FORCEINLINE uint32 GetTypeHash(const FPerMeshInstancingData) { return 0; }
