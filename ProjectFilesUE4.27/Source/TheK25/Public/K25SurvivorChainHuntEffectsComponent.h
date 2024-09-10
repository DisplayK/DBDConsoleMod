#pragma once

#include "CoreMinimal.h"
#include "SurvivorStatusInterface.h"
#include "K25ChainHuntEffectsComponent.h"
#include "K25SurvivorChainHuntEffectsComponent.generated.h"

class ACamperPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK25SurvivorChainHuntEffectsComponent : public UK25ChainHuntEffectsComponent, public ISurvivorStatusInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetOwningSurvivor() const;

public:
	UK25SurvivorChainHuntEffectsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25SurvivorChainHuntEffectsComponent) { return 0; }
