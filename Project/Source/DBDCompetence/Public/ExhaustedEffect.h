#pragma once

#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "ExhaustedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UExhaustedEffect : public UAdjustableCooldownStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CooldownModifier;

public:
	UExhaustedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UExhaustedEffect) { return 0; }
