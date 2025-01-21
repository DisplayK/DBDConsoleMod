#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Counterforce.generated.h"

class ATotem;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCounterforce : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _totemAuraVisibleDuration;

	UPROPERTY(EditDefaultsOnly)
	float _startingTotemCleanseSpeedBonus;

	UPROPERTY(EditDefaultsOnly)
	float _stackableTotemCleanseSpeedBonus;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ShowTotemAura(ATotem* totem);

public:
	UCounterforce();
};

FORCEINLINE uint32 GetTypeHash(const UCounterforce) { return 0; }
