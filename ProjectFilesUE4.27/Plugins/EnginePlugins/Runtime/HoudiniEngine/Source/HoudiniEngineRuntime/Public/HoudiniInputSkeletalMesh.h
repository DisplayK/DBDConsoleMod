#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputSkeletalMesh.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{
	GENERATED_BODY()

public:
	UHoudiniInputSkeletalMesh();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputSkeletalMesh) { return 0; }
