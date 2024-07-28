#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HoudiniMeshSplitInstancerComponent.generated.h"

class UStaticMeshComponent;
class UMaterialInterface;
class UStaticMesh;

UCLASS(meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleInstanceOnly, Export)
	TArray<UStaticMeshComponent*> Instances;

	UPROPERTY(VisibleInstanceOnly)
	TArray<UMaterialInterface*> OverrideMaterials;

	UPROPERTY(VisibleAnywhere)
	UStaticMesh* InstancedMesh;

public:
	UHoudiniMeshSplitInstancerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniMeshSplitInstancerComponent) { return 0; }
