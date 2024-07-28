#include "CoreInteractionPromptActionWidget.h"
#include "InputCoreTypes.h"

void UCoreInteractionPromptActionWidget::StopIdleAnimation()
{

}

void UCoreInteractionPromptActionWidget::SetInputKey4(const FKey& inputKey4New)
{

}

void UCoreInteractionPromptActionWidget::SetInputKey3(const FKey& inputKey3New)
{

}

void UCoreInteractionPromptActionWidget::SetInputKey2(const FKey& inputKey2New)
{

}

void UCoreInteractionPromptActionWidget::SetInputKey(const FKey& inputKeyNew)
{

}

void UCoreInteractionPromptActionWidget::PlayIdleAnimation()
{

}

bool UCoreInteractionPromptActionWidget::HasThirdPrompt() const
{
	return false;
}

bool UCoreInteractionPromptActionWidget::HasSecondPrompt() const
{
	return false;
}

bool UCoreInteractionPromptActionWidget::HasFourthPrompt() const
{
	return false;
}

UCoreInteractionPromptActionWidget::UCoreInteractionPromptActionWidget()
{
	this->InputPrompt = NULL;
	this->InputPrompt2 = NULL;
	this->InputPrompt3 = NULL;
	this->InputPrompt4 = NULL;
	this->IdleAnimationName = TEXT("IdleAnimation");
}
