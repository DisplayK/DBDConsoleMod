#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "JoeysMixtapeEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THELEGION_API UJoeysMixtapeEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffectToImpose;

public:
	UJoeysMixtapeEffect();
};

FORCEINLINE uint32 GetTypeHash(const UJoeysMixtapeEffect) { return 0; }
