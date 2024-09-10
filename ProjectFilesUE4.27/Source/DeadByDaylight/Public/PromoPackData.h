#pragma once

#include "CoreMinimal.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "PromoPackData.generated.h"

class UPaperSprite;

USTRUCT()
struct FPromoPackData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName ID;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UPaperSprite> PromoPackIcon;

	UPROPERTY(EditAnywhere)
	FItemUIData UIData;

public:
	DEADBYDAYLIGHT_API FPromoPackData();
};

FORCEINLINE uint32 GetTypeHash(const FPromoPackData) { return 0; }
