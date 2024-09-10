#pragma once

#include "CoreMinimal.h"
#include "BlessedStatusEffect.h"
#include "LingeringBlessedStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULingeringBlessedStatusEffect : public UBlessedStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float _lingerDuration;

protected:
	UFUNCTION(BlueprintCallable)
	void SetLingerDuration(const float lingerDuration);

private:
	UFUNCTION()
	void Authority_OnInRangeChanged(const bool inRange);

public:
	ULingeringBlessedStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringBlessedStatusEffect) { return 0; }
