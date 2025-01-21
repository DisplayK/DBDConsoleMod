#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "K26P02.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK26P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _generatorRegressPercentage;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TriggerPerk(AGenerator* explodingGenerator);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_MakeSurvivorScream(const ADBDPlayer* screamingSurvivor);

private:
	UFUNCTION()
	void Authority_OnSurvivorHookedOnScourgeHook(const FGameEventData& gameEventData);

public:
	UK26P02();
};

FORCEINLINE uint32 GetTypeHash(const UK26P02) { return 0; }
