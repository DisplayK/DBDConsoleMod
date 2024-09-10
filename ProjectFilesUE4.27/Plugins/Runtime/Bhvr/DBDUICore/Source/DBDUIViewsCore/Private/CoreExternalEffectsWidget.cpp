#include "CoreExternalEffectsWidget.h"

void UCoreExternalEffectsWidget::HideExternalPerk_Implementation(const FName& itemId)
{

}

void UCoreExternalEffectsWidget::HideExternalAddon_Implementation(const FName& itemId)
{

}

UCoreExternalEffectsWidget::UCoreExternalEffectsWidget()
{
	this->AddonScaleRatio = 1.300000;
	this->SpacingBetweenRows = -40;
	this->SpacingPerks = -10;
	this->SpacingAddons = -10;
	this->SpacingBetweenPerksAndAddons = -70;
	this->PerkWidgetClass = NULL;
	this->AddonWidgetClass = NULL;
	this->Container = NULL;
	this->_perkData = TArray<FPerkViewData>();
	this->_perkWidgets = TMap<FName, UCorePerkWidget*>();
	this->_perkPool = TArray<UCorePerkWidget*>();
	this->_perkViewInterfaces = TMap<FName, TScriptInterface<IPerkViewInterface>>();
	this->_addonData = TArray<FAddonViewData>();
	this->_addonWidgets = TMap<FName, UCoreAddonWidget*>();
	this->_addonPool = TArray<UCoreAddonWidget*>();
	this->_addonViewInterfaces = TMap<FName, TScriptInterface<IAddonViewInterface>>();
	this->_timerHandleMap = TMap<FName, FTimerHandle>();
	this->_spacerWidgets = TMap<FName, USpacer*>();
	this->_spacerPool = TArray<USpacer*>();
}
