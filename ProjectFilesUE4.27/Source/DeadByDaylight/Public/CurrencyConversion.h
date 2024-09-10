#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "CurrencyConversion.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyConversion
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<ECurrencyType, float> AmountInOtherCurrency;

public:
	DEADBYDAYLIGHT_API FCurrencyConversion();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyConversion) { return 0; }
