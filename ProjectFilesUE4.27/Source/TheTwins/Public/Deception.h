#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Deception.generated.h"

class UStatusEffect;
class UManualIconStrategy;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeception : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _noScratchMarksDuration;

	UPROPERTY(EditDefaultsOnly)
	float _perkCooldownDuration;

	UPROPERTY(Transient, Export)
	UStatusEffect* _statusEffect;

	UPROPERTY(Transient)
	UManualIconStrategy* _iconStrategy;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnOwningPlayerFakedEnteringLockerCosmetic();

public:
	UDeception();
};

FORCEINLINE uint32 GetTypeHash(const UDeception) { return 0; }
