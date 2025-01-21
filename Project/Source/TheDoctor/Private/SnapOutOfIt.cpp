#include "SnapOutOfIt.h"
#include "ESkillCheckCustomType.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;

void USnapOutOfIt::Authority_OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, ESkillCheckCustomType type)
{

}

void USnapOutOfIt::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USnapOutOfIt, _isSkillCheckFailureTimerActive);
}

USnapOutOfIt::USnapOutOfIt()
{
	this->_isSkillCheckFailureTimerActive = false;
}
