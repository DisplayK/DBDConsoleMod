#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputStaticMesh.generated.h"

class UHoudiniInputStaticMesh;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputStaticMesh : public UHoudiniInputObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<UHoudiniInputStaticMesh*> BlueprintStaticMeshes;

public:
	UHoudiniInputStaticMesh();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputStaticMesh) { return 0; }
