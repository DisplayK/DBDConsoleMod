#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "GameplayTagContainer.h"
#include "AdjustableCooldownStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UAdjustableCooldownStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag CooldownModifierType;

public:
	UAdjustableCooldownStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UAdjustableCooldownStatusEffect) { return 0; }
