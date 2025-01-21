#include "UMGStatusEffectsWidget.h"

void UUMGStatusEffectsWidget::RemoveExistingStatusEffect(const FString& statusEffectID)
{

}

UUMGStatusEffectsWidget::UUMGStatusEffectsWidget()
{
	this->AtlantaStatusEffectIconClass = NULL;
	this->StatusEffectsBox = NULL;
	this->_statusEffectsMap = TMap<FName, UUMGStatusEffectIcon*>();
}
