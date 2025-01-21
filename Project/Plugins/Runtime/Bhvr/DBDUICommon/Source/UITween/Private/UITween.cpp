#include "UITween.h"
#include "EEasingType.h"

class UUITweenInstance;
class UWidget;

UUITweenInstance* UUITween::Create(UWidget* targetWidget, float duration, float delay, EEasingType easing)
{
	return NULL;
}

void UUITween::Clear(UWidget* targetWidget)
{

}

UUITween::UUITween()
{
	this->ActiveInstances = TArray<UUITweenInstance*>();
}
