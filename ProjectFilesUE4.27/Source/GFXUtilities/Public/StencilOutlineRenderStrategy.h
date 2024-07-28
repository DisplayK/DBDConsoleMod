#pragma once

#include "CoreMinimal.h"
#include "BaseOutlineRenderStrategy.h"
#include "StencilOutlineRenderStrategy.generated.h"

class UBatchMeshCommands;
class UMaterialInterface;

UCLASS(BlueprintType)
class GFXUTILITIES_API UStencilOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<UMaterialInterface*> _replacementMaterials;

	UPROPERTY(Transient, Export)
	TArray<UBatchMeshCommands*> _translucentCopies;

public:
	UFUNCTION(BlueprintCallable)
	static void EnableCopyStencilToCustomStencil(bool enabled);

public:
	UStencilOutlineRenderStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UStencilOutlineRenderStrategy) { return 0; }
