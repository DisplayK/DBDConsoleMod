#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FastTimer.h"
#include "K27P02.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK27P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _activePerkDuration;

	UPROPERTY(EditDefaultsOnly)
	float _regressionModifier;

	UPROPERTY(Transient)
	TMap<AGenerator*, FFastTimer> _authority_affectedGeneratorsAndActiveTimers;

	UPROPERTY(Transient)
	TMap<AGenerator*, uint64> _gameplayModifierHandles;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ShowBubbleNotification(AGenerator* triggeringGenerator);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AddGeneratorAura(AGenerator* generator);

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ShowBubbleNotification(const AGenerator* triggeringGenerator);

public:
	UK27P02();
};

FORCEINLINE uint32 GetTypeHash(const UK27P02) { return 0; }
