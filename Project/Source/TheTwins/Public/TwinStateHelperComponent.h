#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TwinStateHelperComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinStateHelperComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UTwinStateHelperComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTwinStateHelperComponent) { return 0; }
