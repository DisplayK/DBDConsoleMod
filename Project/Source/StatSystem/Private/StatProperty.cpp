#include "StatProperty.h"

FStatProperty::FStatProperty()
{
	this->_useTunable = false;
	this->_nonTunableValue = 0.0f;
	this->_tunableValue = FDBDTunableRowHandle{};
}
