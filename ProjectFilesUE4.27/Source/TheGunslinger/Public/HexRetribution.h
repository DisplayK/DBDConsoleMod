#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexRetribution.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexRetribution : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _obliviousDurationByLevels;

	UPROPERTY(EditDefaultsOnly)
	float _auraRevealDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealEffectClass;

public:
	UHexRetribution();
};

FORCEINLINE uint32 GetTypeHash(const UHexRetribution) { return 0; }
