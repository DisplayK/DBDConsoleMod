#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K22AchievementTagTeam.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK22AchievementTagTeam : public UActorComponent
{
	GENERATED_BODY()

public:
	UK22AchievementTagTeam();
};

FORCEINLINE uint32 GetTypeHash(const UK22AchievementTagTeam) { return 0; }
