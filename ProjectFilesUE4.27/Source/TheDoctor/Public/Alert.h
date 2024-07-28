#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Alert.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAlert : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _killerAuraRevealDuration;

private:
	UPROPERTY(Transient, Export)
	UStatusEffect* _alertKillerRevealEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _alertKillerRevealEffectClass;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnPerkActivate_Cosmetic();

public:
	UAlert();
};

FORCEINLINE uint32 GetTypeHash(const UAlert) { return 0; }
