#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "PromoPackContentTypeData.generated.h"

class UUMGPromoPackItemWidget;
class UTexture2D;

USTRUCT()
struct FPromoPackContentTypeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UUMGPromoPackItemWidget> CorrespondingWidget;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> ContentTypeIcon;

public:
	DEADBYDAYLIGHT_API FPromoPackContentTypeData();
};

FORCEINLINE uint32 GetTypeHash(const FPromoPackContentTypeData) { return 0; }
