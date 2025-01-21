#include "CorePlayerStatusesContainerWidget.h"

UCorePlayerStatusesContainerWidget::UCorePlayerStatusesContainerWidget()
{
	this->PlayerStatusWidgets = TArray<UCorePlayerStatusWidget*>();
	this->_playerStatusViewInterfaces = TArray<TScriptInterface<IPlayerStatusViewInterface>>();
}
