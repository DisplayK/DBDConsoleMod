#include "DecisiveStrike.h"
#include "ESkillCheckCustomType.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void UDecisiveStrike::OnUnhookedTimerEnded()
{

}

void UDecisiveStrike::OnSkillCheck(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player)
{

}

void UDecisiveStrike::OnRep_HasBeenAttempted()
{

}

void UDecisiveStrike::OnPickUpEnded(ADBDPlayer* picker)
{

}

void UDecisiveStrike::OnOwnerPickedUp(ADBDPlayer* picker)
{

}

float UDecisiveStrike::GetDurationAfterUnhook() const
{
	return 0.0f;
}

void UDecisiveStrike::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDecisiveStrike, _hasBeenAttempted);
}

UDecisiveStrike::UDecisiveStrike()
{
	this->_timeAfterUnhook = 0.000000;
	this->_skillCheckDelay = 0.700000;
	this->_skillCheckBuffer = 0.000000;
	this->_killerHearsSkillCheckCue = false;
	this->_increaseObsessionChanceEffect = NULL;
	this->_hasBeenAttempted = false;
}
