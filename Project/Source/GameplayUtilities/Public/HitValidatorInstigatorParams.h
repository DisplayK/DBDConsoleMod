#pragma once

#include "CoreMinimal.h"
#include "HitValidatorInstigatorParams.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT()
struct FHitValidatorInstigatorParams
{
	GENERATED_BODY()

public:
	UPROPERTY()
	AActor* Instigator;

	UPROPERTY(Export)
	UPrimitiveComponent* HitPrimitive;

public:
	GAMEPLAYUTILITIES_API FHitValidatorInstigatorParams();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidatorInstigatorParams) { return 0; }
