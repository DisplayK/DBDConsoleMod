#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerEventDispatcher.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API UPlayerEventDispatcher : public UActorComponent
{
	GENERATED_BODY()

public:
	UPlayerEventDispatcher();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerEventDispatcher) { return 0; }
