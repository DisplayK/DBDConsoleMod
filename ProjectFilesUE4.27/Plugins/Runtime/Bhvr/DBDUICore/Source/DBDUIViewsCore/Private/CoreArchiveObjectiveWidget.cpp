#include "CoreArchiveObjectiveWidget.h"
#include "ArchiveNodeObjectiveViewData.h"

void UCoreArchiveObjectiveWidget::SetData(const FArchiveNodeObjectiveViewData& objectiveData)
{

}

UCoreArchiveObjectiveWidget::UCoreArchiveObjectiveWidget()
{
	this->ObjectiveDescriptionRTB = NULL;
	this->ProgressBar = NULL;
	this->CurrentProgressTB = NULL;
	this->MaxProgressTB = NULL;
}
