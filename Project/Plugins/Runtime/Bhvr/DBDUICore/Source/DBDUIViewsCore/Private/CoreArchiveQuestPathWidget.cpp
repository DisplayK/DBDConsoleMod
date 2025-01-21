#include "CoreArchiveQuestPathWidget.h"
#include "ArchiveMapPathViewData.h"

void UCoreArchiveQuestPathWidget::UpdatePath(const FArchiveMapPathViewData& data)
{

}

void UCoreArchiveQuestPathWidget::Reset()
{

}

void UCoreArchiveQuestPathWidget::InitPath(const FArchiveMapPathViewData& data)
{

}

UCoreArchiveQuestPathWidget::UCoreArchiveQuestPathWidget()
{
	this->PathOverlay = NULL;
	this->PathImage = NULL;
	this->_status = EArchivePathStatus::Closed;
}
