#include "HudEditorDragFromParentAxisLimit.h"

FHudEditorDragFromParentAxisLimit::FHudEditorDragFromParentAxisLimit()
{
	this->Enable = false;
	this->AxisOption = EHudEditorDragAxisOption::PositiveSide;
	this->MinDragDistance = 0.0f;
	this->ScaleMinDragDistanceWithParent = false;
	this->MaxDragDistance = 0.0f;
	this->ScaleMaxDragDistanceWithParent = false;
}
