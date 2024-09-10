#include "CustomGameBot.h"

FCustomGameBot::FCustomGameBot()
{
	this->_role = 0;
	this->_difficulty = 0;
	this->_characterIndex = 0;
	this->_botGUID = TEXT("");
	this->_botName = TEXT("");
	this->_loadout = FLoadout{};
}
