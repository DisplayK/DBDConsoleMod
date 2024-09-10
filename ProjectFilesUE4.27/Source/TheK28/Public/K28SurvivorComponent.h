#pragma once

#include "CoreMinimal.h"
#include "SurvivorStatusInterface.h"
#include "K28PlayerComponent.h"
#include "DBDTunableRowHandle.h"
#include "K28SurvivorComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28SurvivorComponent : public UK28PlayerComponent, public ISurvivorStatusInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _killerBlackMaterialDarknessEffect;

private:
	UFUNCTION()
	void OnKillerInRangeChanged(const bool inRange);

public:
	UK28SurvivorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28SurvivorComponent) { return 0; }
