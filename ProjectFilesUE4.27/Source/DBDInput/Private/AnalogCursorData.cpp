#include "AnalogCursorData.h"

FAnalogCursorData::FAnalogCursorData()
{
	this->Type = EAnalogCursorDataType::MaxSpeedDefault;
	this->Value = 0.0f;
	this->ScalesWithDPI = false;
}
