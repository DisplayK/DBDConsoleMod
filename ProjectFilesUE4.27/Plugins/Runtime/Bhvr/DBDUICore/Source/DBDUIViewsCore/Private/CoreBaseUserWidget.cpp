#include "CoreBaseUserWidget.h"

void UCoreBaseUserWidget::UpdateScale_Implementation(float scale)
{

}

void UCoreBaseUserWidget::RegisterForInput()
{

}

void UCoreBaseUserWidget::DeregisterFromInput()
{

}

UCoreBaseUserWidget::UCoreBaseUserWidget() : UUserWidget(FObjectInitializer::Get())
{
	this->ScaleContainer = NULL;
	this->IsInteractive = false;
	this->_controlMode = EControlMode::MOUSE_KB;
	this->ScaleType = EScaleType::None;
	this->_inputManager = NULL;
	this->_animationMap = TMap<FName, UWidgetAnimation*>();
}
