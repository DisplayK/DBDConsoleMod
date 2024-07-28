#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "HoudiniInputMeshComponent.generated.h"

class UStaticMesh;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TSoftObjectPtr<UStaticMesh> StaticMesh;

	UPROPERTY()
	TArray<FString> MeshComponentsMaterials;

public:
	UHoudiniInputMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputMeshComponent) { return 0; }
