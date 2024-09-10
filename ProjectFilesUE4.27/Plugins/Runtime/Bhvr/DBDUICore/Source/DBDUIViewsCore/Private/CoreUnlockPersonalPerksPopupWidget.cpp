#include "CoreUnlockPersonalPerksPopupWidget.h"

UCoreUnlockPersonalPerksPopupWidget::UCoreUnlockPersonalPerksPopupWidget()
{
	this->_perkArray = TArray<UCoreMenuPerkWidget*>();
	this->FirstPerk = NULL;
	this->SecondPerk = NULL;
	this->ThirdPerk = NULL;
}
