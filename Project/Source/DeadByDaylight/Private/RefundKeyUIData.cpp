#include "RefundKeyUIData.h"

FRefundKeyUIData::FRefundKeyUIData()
{
	this->Id = NAME_None;
	this->IconFilePath = TEXT("");
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->Source = ERefundSource::None;
}
