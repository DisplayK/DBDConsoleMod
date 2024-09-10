#include "MapData.h"

UMapData::UMapData()
{
	this->ThemeName = NAME_None;
	this->ThemeWeather = NAME_None;
	this->AudioStateThemes = NAME_None;
	this->AudioStateWeather = NAME_None;
	this->AudioThemeEvent = NAME_None;
	this->AudioLimitPointEvent = NAME_None;
	this->AudioThemeSoundBank = NULL;
	this->MapWidth = 0;
	this->MapHeight = 0;
	this->Draft = false;
	this->MapTileProperties = TArray<FTileProperties>();
	this->Blackboard = NULL;
	this->Gesture = false;
	this->_proceduralGenerationData = NULL;
}
