#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "OnSelfMendImposeEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THELEGION_API UOnSelfMendImposeEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _statusEffectTime;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffectToImpose;

public:
	UOnSelfMendImposeEffect();
};

FORCEINLINE uint32 GetTypeHash(const UOnSelfMendImposeEffect) { return 0; }
