#include "Camaraderie.h"

void UCamaraderie::Authority_EnablePerk()
{

}

UCamaraderie::UCamaraderie()
{
	this->_percentUseItem = 0.000000;
	this->_pauseTimer = 0.000000;
	this->_needItemToTrigger = true;
	this->_camaraderieNotificationEffectClass = NULL;
}
