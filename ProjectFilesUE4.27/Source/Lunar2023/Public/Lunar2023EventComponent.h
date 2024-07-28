#pragma once

#include "CoreMinimal.h"
#include "Lunar2022EventComponent.h"
#include "DBDTunableRowHandle.h"
#include "Lunar2023EventComponent.generated.h"

class UTimedInteractionRespawnableTrigger;

UCLASS(meta=(BlueprintSpawnableComponent))
class ULunar2023EventComponent : public ULunar2022EventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _paperLanternSwitchTimerMin;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _paperLanternSwitchTimerMax;

	UPROPERTY(Transient, Export)
	UTimedInteractionRespawnableTrigger* _timedInteractionRespawnableTrigger;

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	ULunar2023EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULunar2023EventComponent) { return 0; }
