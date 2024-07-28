#include "ArchiveQuestMapSubPresenter.h"
#include "EPlayerRole.h"
#include "UObject/NoExportTypes.h"

void UArchiveQuestMapSubPresenter::UpdateTomeLevels()
{

}

void UArchiveQuestMapSubPresenter::OnTomeMapCreated()
{

}

void UArchiveQuestMapSubPresenter::OnTomeLevelRewardAnimationDone()
{

}

void UArchiveQuestMapSubPresenter::OnQuestNodeUnhovered(EPlayerRole role)
{

}

void UArchiveQuestMapSubPresenter::OnQuestNodeHovered(EPlayerRole role)
{

}

void UArchiveQuestMapSubPresenter::OnNodeSelected(const FName& nodeId, EPlayerRole role, const FVector2D& position)
{

}

void UArchiveQuestMapSubPresenter::OnLevelSelected(const int32 levelIndex)
{

}

void UArchiveQuestMapSubPresenter::NavigateToNextLevelAfterUnlock()
{

}

void UArchiveQuestMapSubPresenter::GetCurrentLevel()
{

}

UArchiveQuestMapSubPresenter::UArchiveQuestMapSubPresenter()
{
	this->_archiveQuestMapWidget = NULL;
	this->_archiveLevelProgressionWidget = NULL;
	this->_storyLevelStatusCache = TArray<EArchivesStoryLevelStatus>();
}
