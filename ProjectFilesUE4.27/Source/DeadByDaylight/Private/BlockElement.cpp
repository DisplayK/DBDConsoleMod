#include "BlockElement.h"

UBlockElement::UBlockElement()
{
	this->_source = NULL;
	this->_affectedPlayers = TSet<TWeakObjectPtr<ADBDPlayer>>();
}
