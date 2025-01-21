#include "TwinBaseAddon.h"

class AConjoinedTwin;

void UTwinBaseAddon::Authority_OnTwinSet(AConjoinedTwin* twin)
{

}

UTwinBaseAddon::UTwinBaseAddon()
{
	this->_statusEffectID = NAME_None;
	this->_customParam = 0.000000;
}
