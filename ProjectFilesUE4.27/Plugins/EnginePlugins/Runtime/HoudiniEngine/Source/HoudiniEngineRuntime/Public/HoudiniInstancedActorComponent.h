#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HoudiniInstancedActorComponent.generated.h"

class AActor;
class UObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniInstancedActorComponent : public USceneComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	UObject* InstancedObject;

	UPROPERTY(VisibleInstanceOnly)
	TArray<AActor*> InstancedActors;

public:
	UHoudiniInstancedActorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInstancedActorComponent) { return 0; }
