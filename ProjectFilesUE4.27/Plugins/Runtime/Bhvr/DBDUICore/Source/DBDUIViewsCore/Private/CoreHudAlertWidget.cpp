#include "CoreHudAlertWidget.h"

class UUITweenInstance;
class UCoreBaseUserWidget;

void UCoreHudAlertWidget::PopAlert()
{

}

void UCoreHudAlertWidget::OnPopAlertComplete(UUITweenInstance* tween)
{

}

void UCoreHudAlertWidget::OnClearAlertsComplete(UUITweenInstance* tween)
{

}

float UCoreHudAlertWidget::GetRemainingTime() const
{
	return 0.0f;
}

TArray<UCoreBaseUserWidget*> UCoreHudAlertWidget::GetPendingAlerts() const
{
	return TArray<UCoreBaseUserWidget*>();
}

TArray<UCoreBaseUserWidget*> UCoreHudAlertWidget::GetAlerts() const
{
	return TArray<UCoreBaseUserWidget*>();
}

void UCoreHudAlertWidget::ClearAlerts()
{

}

UCoreHudAlertWidget::UCoreHudAlertWidget()
{
	this->MaxDisplayedItems = 5;
	this->SecondaryAlpha = 0.500000;
	this->FullAlertDuration = 3.000000;
	this->PendingAlertDuration = 1.500000;
	this->AnimationDuration = 1.000000;
	this->AnimationEasing = EEasingType::Linear;
	this->AnimationTranslationY = 83.000000;
	this->CoreHudScoreAlertItemClass = NULL;
	this->CoreHudStatusEffectAlertItemClass = NULL;
	this->AlertContainer = NULL;
	this->_alerts = TArray<UCoreBaseUserWidget*>();
	this->_pendingAlerts = TArray<UCoreBaseUserWidget*>();
	this->_scoreAlertPool = TArray<UCoreHudScoreAlertItem*>();
	this->_statusEffectAlertPool = TArray<UCoreHudStatusEffectAlertItem*>();
}
