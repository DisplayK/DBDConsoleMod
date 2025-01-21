#include "CoreInteractionProgressWidget.h"
#include "StatusEffectViewData.h"

void UCoreInteractionProgressWidget::SetProficiencies(const TArray<FStatusEffectViewData>& proficiencyDatas)
{

}

UCoreInteractionProgressWidget::UCoreInteractionProgressWidget()
{
	this->Proficiencies = TArray<UCoreStatusEffectIcon*>();
}
