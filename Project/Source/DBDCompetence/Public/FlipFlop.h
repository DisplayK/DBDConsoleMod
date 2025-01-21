#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FlipFlop.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UFlipFlop : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _recoveryProgressionConversionRatio;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _maxWiggleProgression;

private:
	UFUNCTION()
	void Authority_OnPickedUp(ADBDPlayer* picker);

public:
	UFlipFlop();
};

FORCEINLINE uint32 GetTypeHash(const UFlipFlop) { return 0; }
