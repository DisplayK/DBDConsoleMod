#include "MenuFlowTabData.h"

FMenuFlowTabData::FMenuFlowTabData()
{
	this->CurrentTab = TEXT("");
	this->PreviousTab = TEXT("");
	this->TimeOnPreviousTab = 0.0f;
	this->TabChangeTimestamp = TEXT("");
}
