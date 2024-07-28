#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K22ScoreComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK22ScoreComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UK22ScoreComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK22ScoreComponent) { return 0; }
