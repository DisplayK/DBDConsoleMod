#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HoudiniMeshSplitInstancerComponent_V1.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
{
	GENERATED_BODY()

public:
	UHoudiniMeshSplitInstancerComponent_V1();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniMeshSplitInstancerComponent_V1) { return 0; }
