#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "TriggerTimerOnLacerationAlmostFullEffect.generated.h"

class ULacerationComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTriggerTimerOnLacerationAlmostFullEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	ULacerationComponent* _lacerationComponent;

	UPROPERTY(EditDefaultsOnly)
	float _duration;

public:
	UTriggerTimerOnLacerationAlmostFullEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTriggerTimerOnLacerationAlmostFullEffect) { return 0; }
