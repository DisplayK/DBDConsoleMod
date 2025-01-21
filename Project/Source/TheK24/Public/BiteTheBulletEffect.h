#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "BiteTheBulletEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UBiteTheBulletEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

public:
	UBiteTheBulletEffect();
};

FORCEINLINE uint32 GetTypeHash(const UBiteTheBulletEffect) { return 0; }
