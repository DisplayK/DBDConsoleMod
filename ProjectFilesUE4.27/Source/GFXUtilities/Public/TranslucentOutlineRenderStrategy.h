#pragma once

#include "CoreMinimal.h"
#include "BaseOutlineRenderStrategy.h"
#include "TranslucentOutlineRenderStrategy.generated.h"

class UMaterialInterface;

UCLASS()
class GFXUTILITIES_API UTranslucentOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	TArray<UMaterialInterface*> _replacementMaterials;

public:
	UTranslucentOutlineRenderStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTranslucentOutlineRenderStrategy) { return 0; }
