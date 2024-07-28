#pragma once

#include "CoreMinimal.h"
#include "EnduranceEffect.h"
#include "ActivatableEnduranceEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UActivatableEnduranceEffect : public UEnduranceEffect
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Authority_Start(const float duration);

public:
	UActivatableEnduranceEffect();
};

FORCEINLINE uint32 GetTypeHash(const UActivatableEnduranceEffect) { return 0; }
