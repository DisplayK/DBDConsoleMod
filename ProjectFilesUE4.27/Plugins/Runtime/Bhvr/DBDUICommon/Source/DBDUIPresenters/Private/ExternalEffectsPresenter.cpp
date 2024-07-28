#include "ExternalEffectsPresenter.h"
#include "EExternalEffectSource.h"
#include "ExternalEffectData.h"

void UExternalEffectsPresenter::OnShowExternalEffect(const FExternalEffectData& data)
{

}

void UExternalEffectsPresenter::OnHideExternalEffect(const FName itemId, const EExternalEffectSource externalEffectSource)
{

}

UExternalEffectsPresenter::UExternalEffectsPresenter()
{
	this->CoreExternalEffectsWidgetClass = NULL;
}
