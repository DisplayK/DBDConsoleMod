#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESubscriptionRewardType.h"
#include "SubscriptionRewardTypeData.h"
#include "SubscriptionRewardDataAsset.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USubscriptionRewardDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TMap<ESubscriptionRewardType, FSubscriptionRewardTypeData> Data;

public:
	USubscriptionRewardDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const USubscriptionRewardDataAsset) { return 0; }
