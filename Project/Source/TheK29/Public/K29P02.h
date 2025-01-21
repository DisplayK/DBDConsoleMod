#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K29P02.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK29P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _revealRange;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _effectClass;

	UPROPERTY(Transient, Export)
	TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<UStatusEffect>> _survivorRevealedEffects;

public:
	UFUNCTION(BlueprintCallable)
	float GetRevealRange();

private:
	UFUNCTION()
	void Authority_OnInRangeChanged(const bool inRange, ACamperPlayer* survivor);

public:
	UK29P02();
};

FORCEINLINE uint32 GetTypeHash(const UK29P02) { return 0; }
