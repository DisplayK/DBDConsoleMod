#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PromoPackPurchaseUIData.h"
#include "PromoPackPurchaseUIDataUtility.generated.h"

UCLASS(BlueprintType)
class UPromoPackPurchaseUIDataUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	static void SetRemainingTimeFromHours(FPromoPackPurchaseUIData& data, int32 remainHours);

public:
	UPromoPackPurchaseUIDataUtility();
};

FORCEINLINE uint32 GetTypeHash(const UPromoPackPurchaseUIDataUtility) { return 0; }
