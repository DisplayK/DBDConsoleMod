#include "StruggleComponent.h"
#include "ESkillCheckCustomType.h"

class ADBDPlayer;

void UStruggleComponent::OnSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player)
{

}

void UStruggleComponent::Authority_TryActivateSkillCheck()
{

}

UStruggleComponent::UStruggleComponent()
{
	this->_skillCheckCount = 0;
}
