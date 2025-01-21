#pragma once

#include "CoreMinimal.h"
#include "HitValidatorTargetParams.generated.h"

class ACharacter;
class UCapsuleComponent;

USTRUCT()
struct FHitValidatorTargetParams
{
	GENERATED_BODY()

public:
	UPROPERTY()
	ACharacter* Target;

	UPROPERTY(Export)
	UCapsuleComponent* HittableCapsule;

	UPROPERTY()
	float TargetLocationTimestamp;

public:
	GAMEPLAYUTILITIES_API FHitValidatorTargetParams();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidatorTargetParams) { return 0; }
