#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ECurrencyType.h"
#include "Styling/SlateColor.h"
#include "CurrencyUIData.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyUIData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECurrencyType CurrencyType;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText Description;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor CurrencyColorTheme;

public:
	DEADBYDAYLIGHT_API FCurrencyUIData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyUIData) { return 0; }
