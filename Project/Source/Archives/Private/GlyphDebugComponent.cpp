#include "GlyphDebugComponent.h"

UGlyphDebugComponent::UGlyphDebugComponent()
{
	this->_assignOwnerOnBeginPlay = false;
	this->_ownerPawnType = EPawnType::VE_None;
}
