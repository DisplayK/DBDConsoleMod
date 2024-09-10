#include "BuiltLevelData.h"

FBuiltLevelData::FBuiltLevelData()
{
	this->ThemeName = NAME_None;
	this->ThemeWeather = NAME_None;
	this->AudioStateThemes = NAME_None;
	this->AudioStateWeather = NAME_None;
	this->AudioThemeEvent = NAME_None;
	this->AudioLimitPointEvent = NAME_None;
	this->AudioThemeSoundBank = NULL;
	this->MapName = TEXT("");
	this->TileCount = 0;
	this->Dependencies = TArray<FDependency>();
	this->SpecialEventId = NAME_None;
}
