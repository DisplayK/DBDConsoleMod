#include "CoreArchiveQuestMapWidget.h"
#include "ArchiveMapPathViewData.h"
#include "ArchiveNodeGraphViewData.h"

class UCoreArchiveQuestPathWidget;
class UCoreArchiveQuestNodeWidget;
class UCoreButtonWidget;

void UCoreArchiveQuestMapWidget::UnbindFromPath(UCoreArchiveQuestPathWidget* path)
{

}

void UCoreArchiveQuestMapWidget::UnbindFromNode(UCoreArchiveQuestNodeWidget* node)
{

}

void UCoreArchiveQuestMapWidget::SetupPath(const FArchiveMapPathViewData& pathData)
{

}

void UCoreArchiveQuestMapWidget::SetupNode(const FArchiveNodeGraphViewData& nodeData)
{

}

void UCoreArchiveQuestMapWidget::OnNodeUnhovered(UCoreButtonWidget* buttonTarget)
{

}

void UCoreArchiveQuestMapWidget::OnNodesRevealCompleted()
{

}

void UCoreArchiveQuestMapWidget::OnNodeHovered(UCoreButtonWidget* buttonTarget)
{

}

void UCoreArchiveQuestMapWidget::OnNodeClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreArchiveQuestMapWidget::BindToPath(UCoreArchiveQuestPathWidget* path)
{

}

void UCoreArchiveQuestMapWidget::BindToNode(UCoreArchiveQuestNodeWidget* node)
{

}

UCoreArchiveQuestMapWidget::UCoreArchiveQuestMapWidget()
{
	this->ChallengesContainer = NULL;
	this->ArchiveQuestNodeWidgetClass = NULL;
	this->ArchiveQuestPathWidgetClass = NULL;
	this->MaxDisplayedNodes = 0;
	this->MaxDisplayedPaths = 0;
	this->QuestMapRevealDuration = 1.000000;
	this->NodeRevealDuration = 0.300000;
	this->PathRevealDuration = 0.750000;
	this->NodeRevealEasingType = EEasingType::Linear;
	this->PathRevealEasingType = EEasingType::Linear;
	this->QuestMapGenerationSound = NULL;
	this->_nodeGraphDataList = TArray<FArchiveNodeGraphViewData>();
	this->_pathDataList = TArray<FArchiveMapPathViewData>();
	this->_nodeDictionary = TMap<FName, UCoreArchiveQuestNodeWidget*>();
	this->_pathDictionary = TMap<FName, UCoreArchiveQuestPathWidget*>();
	this->_nodeWidgetPool = TArray<UCoreArchiveQuestNodeWidget*>();
	this->_pathWidgetPool = TArray<UCoreArchiveQuestPathWidget*>();
}
