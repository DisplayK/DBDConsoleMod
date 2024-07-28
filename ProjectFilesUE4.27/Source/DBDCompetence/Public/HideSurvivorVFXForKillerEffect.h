#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "HideSurvivorVFXForKillerEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHideSurvivorVFXForKillerEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void HideVFX(bool hide);

public:
	UHideSurvivorVFXForKillerEffect();
};

FORCEINLINE uint32 GetTypeHash(const UHideSurvivorVFXForKillerEffect) { return 0; }
