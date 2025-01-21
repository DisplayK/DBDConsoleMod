#include "ASValue.h"

FASValue::FASValue()
{
	this->ASType = EASType::Undefined;
	this->ASBoolean = false;
	this->ASInt = 0;
	this->ASNumber = 0.0f;
	this->ASString = TEXT("");
	this->ASObject = NULL;
}
