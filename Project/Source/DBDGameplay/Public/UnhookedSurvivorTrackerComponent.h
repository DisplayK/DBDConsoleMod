#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnhookedSurvivorTrackerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UUnhookedSurvivorTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UUnhookedSurvivorTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UUnhookedSurvivorTrackerComponent) { return 0; }
