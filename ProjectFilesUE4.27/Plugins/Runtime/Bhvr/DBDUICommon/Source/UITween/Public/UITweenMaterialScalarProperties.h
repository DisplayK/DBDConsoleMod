#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UITweenMaterialScalarProperties.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class UITWEEN_API UUITweenMaterialScalarProperties : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	UMaterialInstanceDynamic* MaterialInstance;

public:
	UUITweenMaterialScalarProperties();
};

FORCEINLINE uint32 GetTypeHash(const UUITweenMaterialScalarProperties) { return 0; }
