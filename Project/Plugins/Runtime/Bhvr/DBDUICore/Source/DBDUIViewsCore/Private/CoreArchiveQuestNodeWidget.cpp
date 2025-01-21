#include "CoreArchiveQuestNodeWidget.h"
#include "ArchiveNodeViewData.h"
#include "EStoryNodeState.h"

void UCoreArchiveQuestNodeWidget::UpdateNode(const FArchiveNodeViewData& data)
{

}

void UCoreArchiveQuestNodeWidget::ShowRewardNodeTooltip()
{

}

void UCoreArchiveQuestNodeWidget::Reset()
{

}

bool UCoreArchiveQuestNodeWidget::NeedsChallengeReminderHoverAnimation() const
{
	return false;
}

bool UCoreArchiveQuestNodeWidget::IsValidNode() const
{
	return false;
}

bool UCoreArchiveQuestNodeWidget::IsSelectableNode() const
{
	return false;
}

void UCoreArchiveQuestNodeWidget::InitNode(const FName& nodeId, const FArchiveNodeViewData& data, bool isChallengeReminderNode)
{

}

void UCoreArchiveQuestNodeWidget::HandleStatusChange(const EStoryNodeState prevStatus, const EStoryNodeState currentStatus)
{

}

void UCoreArchiveQuestNodeWidget::BroadcastDragBegin()
{

}

UCoreArchiveQuestNodeWidget::UCoreArchiveQuestNodeWidget()
{
	this->HorizontalAlignment = ETooltipHorizontalAlignment::Default;
	this->VerticalAlignment = ETooltipVerticalAlignment::Default;
	this->Icon = NULL;
	this->VignetteIndicatorOverlay = NULL;
	this->StatusChangeAudioEvents = TMap<ENodeStatusChange, UAkAudioEvent*>();
	this->_nodeId = NAME_None;
	this->_isChallengeReminderNode = false;
	this->_isDraggable = false;
}
