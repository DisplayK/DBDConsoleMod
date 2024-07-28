#pragma once

#include "CoreMinimal.h"
#include "BaseOutlineRenderStrategy.h"
#include "CustomDepthOutlineRenderStrategy.generated.h"

class UBatchMeshCommands;
class UMaterialInterface;

UCLASS()
class GFXUTILITIES_API UCustomDepthOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UMaterialInterface* _replacementMaterial;

	UPROPERTY(Transient, Export)
	TArray<UBatchMeshCommands*> _translucentCopies;

public:
	UCustomDepthOutlineRenderStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UCustomDepthOutlineRenderStrategy) { return 0; }
