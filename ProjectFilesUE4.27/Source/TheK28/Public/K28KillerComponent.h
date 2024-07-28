#pragma once

#include "CoreMinimal.h"
#include "K28PlayerComponent.h"
#include "EK28NightCycleState.h"
#include "K28KillerComponent.generated.h"

class ASlasherPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28KillerComponent : public UK28PlayerComponent
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNighttimeNearingActivation(ASlasherPlayer* killer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNightCycleStateChanged(ASlasherPlayer* killer, EK28NightCycleState dayNightCycleState);

public:
	UK28KillerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerComponent) { return 0; }
