#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ScriptInterface.h"
#include "EArchivesStoryLevelStatus.h"
#include "EPlayerRole.h"
#include "ArchiveQuestMapSubPresenter.generated.h"

class IArchiveQuestMapViewInterface;
class IArchiveLevelProgressionViewInterface;

UCLASS()
class DBDUIPRESENTERS_API UArchiveQuestMapSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TScriptInterface<IArchiveQuestMapViewInterface> _archiveQuestMapWidget;

	UPROPERTY(Transient)
	TScriptInterface<IArchiveLevelProgressionViewInterface> _archiveLevelProgressionWidget;

	UPROPERTY(Transient)
	TArray<EArchivesStoryLevelStatus> _storyLevelStatusCache;

private:
	UFUNCTION()
	void UpdateTomeLevels();

	UFUNCTION()
	void OnTomeMapCreated();

	UFUNCTION()
	void OnTomeLevelRewardAnimationDone();

	UFUNCTION()
	void OnQuestNodeUnhovered(EPlayerRole role);

	UFUNCTION()
	void OnQuestNodeHovered(EPlayerRole role);

	UFUNCTION()
	void OnNodeSelected(const FName& nodeId, EPlayerRole role, const FVector2D& position);

	UFUNCTION()
	void OnLevelSelected(const int32 levelIndex);

	UFUNCTION()
	void NavigateToNextLevelAfterUnlock();

	UFUNCTION()
	void GetCurrentLevel();

public:
	UArchiveQuestMapSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveQuestMapSubPresenter) { return 0; }
