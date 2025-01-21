#include "AICamperDodgeTunableRowData.h"

FAICamperDodgeTunableRowData::FAICamperDodgeTunableRowData()
{
	this->CharacterId = 0;
	this->Description = FText::GetEmpty();
	this->BestDodgeType = EAIDodgeType::FORWARD_SIDE_STEP;
	this->RequireInSight = false;
	this->RequireAttackState = false;
	this->Duration = 0.0f;
	this->Range = 0.0f;
	this->AttackPlusSurvivorHalfWidth = 0.0f;
	this->FieldOfView = 0.0f;
}
