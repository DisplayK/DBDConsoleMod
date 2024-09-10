#include "CoreStartSequenceWidget.h"

class UUITweenInstance;

void UCoreStartSequenceWidget::OnHideStartSequenceComplete(UUITweenInstance* tween)
{

}

UCoreStartSequenceWidget::UCoreStartSequenceWidget()
{
	this->FadeInDuration = 1.000000;
	this->FadeOutDuration = 1.000000;
	this->FadeInEasing = EEasingType::Linear;
	this->FadeOutEasing = EEasingType::Linear;
	this->BorderColors = TMap<EThemeColorId, FLinearColor>();
	this->ThemeNameTextfield = NULL;
	this->SeparatorImage = NULL;
	this->MapNameTextfield = NULL;
}
