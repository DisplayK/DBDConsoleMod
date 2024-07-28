#include "PathBuilder.h"

UPathBuilder::UPathBuilder()
{
	this->PathReachedPointRadius = 200.000000;
	this->ToleratedTerrorPressure = EAITerrorLevel::None;
	this->OverridePreviousPathStrategy = false;
	this->_path = NULL;
	this->_aiOwner = NULL;
}
