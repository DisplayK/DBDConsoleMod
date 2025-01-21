#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UITweenMaterialVectorProperties.generated.h"

class UMaterialInstanceDynamic;

UCLASS()
class UITWEEN_API UUITweenMaterialVectorProperties : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	UMaterialInstanceDynamic* MaterialInstance;

public:
	UUITweenMaterialVectorProperties();
};

FORCEINLINE uint32 GetTypeHash(const UUITweenMaterialVectorProperties) { return 0; }
