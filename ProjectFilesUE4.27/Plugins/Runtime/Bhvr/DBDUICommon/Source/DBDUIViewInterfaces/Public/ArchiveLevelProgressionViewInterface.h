#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RewardWrapperViewData.h"
#include "EArchivesStoryLevelStatus.h"
#include "ArchiveLevelProgressionViewInterface.generated.h"

class UArchiveStoryLevelViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UArchiveLevelProgressionViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IArchiveLevelProgressionViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateLevelStatus(int32 level, EArchivesStoryLevelStatus status);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTomeRewardsData(const TArray<FRewardWrapperViewData>& rewardsData, bool areLocked);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTomeLevelsData(const TArray<UArchiveStoryLevelViewData*>& levelsData, int32 selectedLevel);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetRewardsContainerVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLevelSelectorVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLevelSelectorEnabled(const bool enabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetActiveLevel(int32 levelIndex, bool performAction);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PlayRewardsAnimation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void GoToNextLevel(int32 levelIndex);

};
