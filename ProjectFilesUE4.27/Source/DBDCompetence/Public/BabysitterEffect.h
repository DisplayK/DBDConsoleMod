#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "BabysitterEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBabysitterEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UBabysitterEffect();
};

FORCEINLINE uint32 GetTypeHash(const UBabysitterEffect) { return 0; }
