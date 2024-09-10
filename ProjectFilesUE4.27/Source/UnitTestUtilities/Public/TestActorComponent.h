#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestActorComponent.generated.h"

UCLASS(NotPlaceable, meta=(BlueprintSpawnableComponent))
class UNITTESTUTILITIES_API UTestActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UTestActorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTestActorComponent) { return 0; }
