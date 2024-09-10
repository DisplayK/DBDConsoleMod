#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInputInstancedMeshComponent.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FTransform> InstanceTransforms;

public:
	UHoudiniInputInstancedMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputInstancedMeshComponent) { return 0; }
