#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IsLookingTowardsQueryComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UIsLookingTowardsQueryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UIsLookingTowardsQueryComponent();
};

FORCEINLINE uint32 GetTypeHash(const UIsLookingTowardsQueryComponent) { return 0; }
