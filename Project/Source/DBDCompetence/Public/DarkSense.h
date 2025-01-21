#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "DarkSense.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDarkSense : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _killerRevealDuration;

	UPROPERTY(EditDefaultsOnly)
	float _darkSenseRevealRange;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedRevealEffect;

private:
	UFUNCTION()
	void Authority_OnInRangeChanged(const bool inRange);

public:
	UDarkSense();
};

FORCEINLINE uint32 GetTypeHash(const UDarkSense) { return 0; }
