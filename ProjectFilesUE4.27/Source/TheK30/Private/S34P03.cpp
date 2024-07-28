#include "S34P03.h"

float US34P03::GetRepairSpeedAtLevel() const
{
	return 0.0f;
}

float US34P03::GetGeneratorRangeFromPlayer() const
{
	return 0.0f;
}

US34P03::US34P03()
{
	this->_generatorsInRange = TArray<AGenerator*>();
	this->_activeStatusEffects = TMap<ADBDPlayer*, UStatusEffect*>();
	this->_generatorRangeFromPlayer = -1.000000;
	this->_repairSpeedModifierClass = NULL;
	this->_repairSpeedValues = 0.000000;
}
