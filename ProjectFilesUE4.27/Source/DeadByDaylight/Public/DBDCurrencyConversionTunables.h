#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CurrencyConversion.h"
#include "ECurrencyType.h"
#include "DBDCurrencyConversionTunables.generated.h"

UCLASS(BlueprintType)
class UDBDCurrencyConversionTunables : public UDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<ECurrencyType, FCurrencyConversion> Currencies;

public:
	UDBDCurrencyConversionTunables();
};

FORCEINLINE uint32 GetTypeHash(const UDBDCurrencyConversionTunables) { return 0; }
