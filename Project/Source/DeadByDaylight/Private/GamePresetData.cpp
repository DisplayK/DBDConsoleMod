#include "GamePresetData.h"

FGamePresetData::FGamePresetData()
{
	this->_mapAvailabilities = TArray<uint8>();
	this->_perkAvailabilities = TArray<uint8>();
	this->_offeringAvailabilities = TArray<uint8>();
	this->_itemAvailabilities = TArray<uint8>();
	this->_itemAddonAvailabilities = TArray<uint8>();
	this->_customizationItemAvailabilities = TArray<uint8>();
	this->_characterAvailabilities = TArray<uint8>();
	this->_allowDlcContent = false;
	this->_privateMatch = false;
	this->_botsData = FCustomGameBotsData{};
}
