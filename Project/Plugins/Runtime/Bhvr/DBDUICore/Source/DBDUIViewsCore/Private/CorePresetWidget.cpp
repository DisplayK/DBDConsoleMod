#include "CorePresetWidget.h"

void UCorePresetWidget::SetSelectedPreset(bool isSelectedNew)
{

}

void UCorePresetWidget::SetPreset(int32 presetNum)
{

}

UCorePresetWidget::UCorePresetWidget()
{
	this->PresetId = 0;
	this->IsSelected = false;
	this->PresetText = NULL;
	this->Selected = NULL;
	this->Background = NULL;
	this->OnHoverBorder = NULL;
}
