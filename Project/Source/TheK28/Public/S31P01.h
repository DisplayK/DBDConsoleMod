#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S31P01.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US31P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _loseHealthStateDetectionRadius;

	UPROPERTY(EditDefaultsOnly)
	float _killerAuraRevealDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedAuraReveal;

public:
	US31P01();
};

FORCEINLINE uint32 GetTypeHash(const US31P01) { return 0; }
