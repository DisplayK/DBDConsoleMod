#include "SerializablePlayerPerks.h"

FSerializablePlayerPerks::FSerializablePlayerPerks()
{
	this->Perks = TMap<FName, int32>();
}
