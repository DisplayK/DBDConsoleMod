#pragma once

#include "CoreMinimal.h"
#include "EOfferingEffectType.h"
#include "OfferingEffect.generated.h"

USTRUCT(BlueprintType)
struct FOfferingEffect
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOfferingEffectType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Modifier;

public:
	DEADBYDAYLIGHT_API FOfferingEffect();
};

FORCEINLINE uint32 GetTypeHash(const FOfferingEffect) { return 0; }
