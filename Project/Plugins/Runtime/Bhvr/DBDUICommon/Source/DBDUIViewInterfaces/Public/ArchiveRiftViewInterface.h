#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "ArchivesRiftGenericViewData.h"
#include "ArchiveRiftTierRewardsViewData.h"
#include "ArchivesRiftUnlockSequenceData.h"
#include "ArchiveRiftViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UArchiveRiftViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IArchiveRiftViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetRiftFragmentTooltipViewData(const FCurrencyProgressionTooltipViewData& RiftFragmentTooltipViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetRewardTiersData(const TArray<FArchiveRiftTierRewardsViewData>& riftTiersData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMatchmakingSoftlockState(bool isInMatchmakingSoftlock);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLoadingSpinner(bool isLoading);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FArchivesRiftGenericViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PlayUnlockingAnimation(const FArchivesRiftUnlockSequenceData& data);

};
