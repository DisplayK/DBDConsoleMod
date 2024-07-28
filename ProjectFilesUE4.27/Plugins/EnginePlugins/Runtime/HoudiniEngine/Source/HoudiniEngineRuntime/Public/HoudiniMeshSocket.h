#pragma once

#include "CoreMinimal.h"
#include "HoudiniMeshSocket.generated.h"

USTRUCT()
struct FHoudiniMeshSocket
{
	GENERATED_BODY()

public:
	HOUDINIENGINERUNTIME_API FHoudiniMeshSocket();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniMeshSocket) { return 0; }
