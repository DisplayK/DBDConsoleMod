#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SleepingSkinnedMeshRegisterer.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API USleepingSkinnedMeshRegisterer : public UActorComponent
{
	GENERATED_BODY()

public:
	USleepingSkinnedMeshRegisterer();
};

FORCEINLINE uint32 GetTypeHash(const USleepingSkinnedMeshRegisterer) { return 0; }
