#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "CoupDeGrace.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoupDeGrace : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _lungeAttackAddDurationMultiplier;

	UPROPERTY(Transient)
	TArray<AGenerator*> _completedGenerators;

public:
	UCoupDeGrace();
};

FORCEINLINE uint32 GetTypeHash(const UCoupDeGrace) { return 0; }
