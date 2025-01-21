#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StunnableInterface.h"
#include "TwinStunnableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinStunnableComponent : public UActorComponent, public IStunnableInterface
{
	GENERATED_BODY()

public:
	UTwinStunnableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinStunnableComponent) { return 0; }
