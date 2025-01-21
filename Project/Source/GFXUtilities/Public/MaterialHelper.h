#pragma once

#include "CoreMinimal.h"
#include "BatchMeshCommands.h"
#include "MaterialHelper.generated.h"

class UMeshComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UMaterialHelper : public UBatchMeshCommands
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void RefreshMeshes();

	UFUNCTION(BlueprintCallable)
	void RefreshMesh(UMeshComponent* mc);

public:
	UMaterialHelper();
};

FORCEINLINE uint32 GetTypeHash(const UMaterialHelper) { return 0; }
