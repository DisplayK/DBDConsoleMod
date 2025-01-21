#include "S33P03.h"

float US33P03::GetSkillCheckTriggerPercentPerToken()
{
	return 0.0f;
}

float US33P03::GetSkillCheckCursorSpeedPerToken()
{
	return 0.0f;
}

float US33P03::GetSkillCheckBonusPercentPerTokenAtLevel()
{
	return 0.0f;
}

US33P03::US33P03()
{
	this->_skillCheckTriggerPercentPerToken = 0.020000;
	this->_skillCheckCursorSpeedPerToken = 0.020000;
	this->_skillCheckBonusPercentPerToken = 0.000000;
}
