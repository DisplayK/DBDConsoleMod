#pragma once

#include "CoreMinimal.h"
#include "HitValidationValidator.generated.h"

USTRUCT()
struct FHitValidationValidator
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float CapsuleInflation;

	UPROPERTY()
	float MaximumDistance;

	UPROPERTY()
	FString Name;

public:
	DEADBYDAYLIGHT_API FHitValidationValidator();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidationValidator) { return 0; }
