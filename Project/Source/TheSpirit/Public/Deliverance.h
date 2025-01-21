#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Deliverance.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeliverance : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _brokenEffectDurationPerLevel;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _selfUnhookAlwaysSucceedEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _selfUnhookAlwaysSucceedEffect;

public:
	UDeliverance();
};

FORCEINLINE uint32 GetTypeHash(const UDeliverance) { return 0; }
