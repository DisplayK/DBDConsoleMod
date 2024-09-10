#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_K27Power_20.generated.h"

class AOnryoTelevision;
class ASlasherPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_20 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<AOnryoTelevision*> _lastTurnedOffTelevisionsByOnryo;

	UPROPERTY(EditDefaultsOnly)
	int32 _numberOfTVsToTurnOn;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAddonTriggered(const bool televisionsWerePowered, const ASlasherPlayer* killer);

	UFUNCTION(Client, Unreliable)
	void Client_OnAddonTriggered(const bool televisionsWerePowered);

public:
	UAddon_K27Power_20();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_20) { return 0; }
