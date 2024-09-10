#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StunnableInterface.h"
#include "KnightHuskStunnableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UKnightHuskStunnableComponent : public UActorComponent, public IStunnableInterface
{
	GENERATED_BODY()

public:
	UKnightHuskStunnableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKnightHuskStunnableComponent) { return 0; }
