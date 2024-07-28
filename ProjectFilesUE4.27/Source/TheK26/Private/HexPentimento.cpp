#include "HexPentimento.h"

UHexPentimento::UHexPentimento()
{
	this->_statusEffectNames = TSet<FName>();
	this->_rekindleInteractionClass = NULL;
	this->_blockedTotems = TArray<ATotem*>();
}
