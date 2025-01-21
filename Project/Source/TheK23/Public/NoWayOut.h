#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "NoWayOut.generated.h"

class ADBDPlayer;
class AEscapeDoor;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UNoWayOut : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _exitGatePanelBlockBaseDuration;

	UPROPERTY(EditDefaultsOnly)
	float _exitGatePanelBlockDurationPerToken;

	UPROPERTY(Transient)
	TArray<ACamperPlayer*> _hookedSurvivors;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TriggerLoudNoise(ADBDPlayer* instigator, AEscapeDoor* escapeDoor);

public:
	UNoWayOut();
};

FORCEINLINE uint32 GetTypeHash(const UNoWayOut) { return 0; }
