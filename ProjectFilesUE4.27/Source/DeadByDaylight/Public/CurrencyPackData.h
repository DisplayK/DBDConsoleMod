#pragma once

#include "CoreMinimal.h"
#include "ItemData.h"
#include "ECurrencyType.h"
#include "CurrencyPackData.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyPackData: public FItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	ECurrencyType CurrencyType;

public:
	DEADBYDAYLIGHT_API FCurrencyPackData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyPackData) { return 0; }
