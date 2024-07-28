#include "CustomGamePresetData.h"

FCustomGamePresetData::FCustomGamePresetData()
{
	this->_mapAvailabilities = TArray<uint8>();
	this->_arePerkAvailable = false;
	this->_areOfferingAvailable = false;
	this->_areItemAvailable = false;
	this->_areItemAddonAvailable = false;
	this->_areDlcContentAllowed = false;
	this->_isPrivateMatch = false;
	this->_botsData = FCustomGameBotsData{};
}
