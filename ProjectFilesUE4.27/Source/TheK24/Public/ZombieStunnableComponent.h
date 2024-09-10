#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StunnableInterface.h"
#include "ZombieStunnableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombieStunnableComponent : public UActorComponent, public IStunnableInterface
{
	GENERATED_BODY()

public:
	UZombieStunnableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UZombieStunnableComponent) { return 0; }
