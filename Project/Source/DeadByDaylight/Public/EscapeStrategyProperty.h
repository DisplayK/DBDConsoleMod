#pragma once

#include "CoreMinimal.h"
#include "EscapeStrategyType.h"
#include "EscapeStrategyProperty.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FEscapeStrategyProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EscapeStrategyType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* Population;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

public:
	DEADBYDAYLIGHT_API FEscapeStrategyProperty();
};

FORCEINLINE uint32 GetTypeHash(const FEscapeStrategyProperty) { return 0; }
