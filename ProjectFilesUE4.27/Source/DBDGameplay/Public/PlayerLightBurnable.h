#pragma once

#include "CoreMinimal.h"
#include "LightBurnable.h"
#include "GameplayTagContainer.h"
#include "PlayerLightBurnable.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPlayerLightBurnable : public ULightBurnable
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_DELEGATE_TwoParams(FInteractionDelegate, ADBDPlayer*, Player, FGameplayTag, interactionSemantic);

public:
	UPlayerLightBurnable();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerLightBurnable) { return 0; }
