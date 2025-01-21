#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Addon_TheBlight_17.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_17 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _survivorInRangeDistance;

	UPROPERTY(EditDefaultsOnly)
	float _hinderedSeconds;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SpawnParticleOnSurvivor(const ACamperPlayer* camperPlayer);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SpawnParticleOnSurvivors(const TArray<ACamperPlayer*>& survivors);

public:
	UAddon_TheBlight_17();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_17) { return 0; }
