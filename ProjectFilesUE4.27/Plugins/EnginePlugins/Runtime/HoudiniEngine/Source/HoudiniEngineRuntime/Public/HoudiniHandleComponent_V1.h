#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HoudiniHandleComponent_V1.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHoudiniHandleComponent_V1 : public USceneComponent
{
	GENERATED_BODY()

public:
	UHoudiniHandleComponent_V1();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniHandleComponent_V1) { return 0; }
