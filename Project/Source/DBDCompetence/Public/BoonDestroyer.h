#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "BoonDestroyer.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBoonDestroyer : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _survivorAuraRevealDuration;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _survivorRevealEffect;

public:
	UBoonDestroyer();
};

FORCEINLINE uint32 GetTypeHash(const UBoonDestroyer) { return 0; }
