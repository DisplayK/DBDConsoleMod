#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPromoPackContentType.h"
#include "PromoPackContentTypeData.h"
#include "PromoPackContentDataAsset.generated.h"

UCLASS()
class UPromoPackContentDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TMap<EPromoPackContentType, FPromoPackContentTypeData> Data;

public:
	UPromoPackContentDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UPromoPackContentDataAsset) { return 0; }
