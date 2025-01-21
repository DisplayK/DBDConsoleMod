#include "CorePerksContainerWidget.h"

UCorePerksContainerWidget::UCorePerksContainerWidget()
{
	this->PerkWidgets = TArray<UCorePerkWidget*>();
	this->_perkViewInterfaces = TArray<TScriptInterface<IPerkViewInterface>>();
}
