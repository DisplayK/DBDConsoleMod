#include "SkillCheck.h"
#include "SkillCheckResponse.h"
#include "ESkillCheckCustomType.h"
#include "SkillCheckDefinition.h"

class UChargeableInteractionDefinition;
class ADBDPlayer;

bool USkillCheck::ShouldShowWarning()
{
	return false;
}

void USkillCheck::Server_OnSkillCheckSuccess_Implementation(FSkillCheckResponse skillCheckResponse)
{

}

void USkillCheck::Server_OnSkillCheckFailure_Implementation(FSkillCheckResponse skillCheckResponse)
{

}

void USkillCheck::Server_DeactivateSkillCheck_Implementation()
{

}

void USkillCheck::Server_ActivateSkillCheck_Implementation(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType skillCheckCustomType, FSkillCheckDefinition definition)
{

}

void USkillCheck::Multicast_SkillCheckResponse_Implementation(FSkillCheckResponse skillCheckResponse)
{

}

void USkillCheck::Multicast_OnTriggerSkillCheck_Implementation(UChargeableInteractionDefinition* currentInteraction, ESkillCheckCustomType skillCheckCustomType, const FString& id, const FString& salt, const float warningSoundDelay)
{

}

void USkillCheck::Multicast_OnTriggerCustomSkillCheck_Implementation(UChargeableInteractionDefinition* currentInteraction, ESkillCheckCustomType skillCheckCustomType, const FString& id, const FString& salt, const FSkillCheckDefinition& definition)
{

}

void USkillCheck::Multicast_OnTriggerContinuousCustomSkillCheck_Implementation(UChargeableInteractionDefinition* currentInteraction, ESkillCheckCustomType skillCheckCustomType, const FSkillCheckDefinition& definition)
{

}

void USkillCheck::Multicast_DeactivateSkillCheck_Implementation()
{

}

void USkillCheck::Multicast_ActivateSkillCheck_Implementation(UChargeableInteractionDefinition* interaction, ESkillCheckCustomType skillCheckCustomType, FSkillCheckDefinition definition)
{

}

void USkillCheck::Local_OnSkillCheckSuccessTrigger(const bool bonus, const bool insane, ESkillCheckCustomType skillCheckCustomType, const bool failedCountedAsGood)
{

}

void USkillCheck::Local_OnSkillCheckFailureTrigger(const bool hadInput, const bool insane, ESkillCheckCustomType skillCheckCustomType)
{

}

bool USkillCheck::IsOffCenterSkillCheck() const
{
	return false;
}

bool USkillCheck::IsHexSkillCheck(ADBDPlayer* dbdPlayer) const
{
	return false;
}

bool USkillCheck::IsDisplayed() const
{
	return false;
}

bool USkillCheck::CanSkillCheckTypeGrantScore(ESkillCheckCustomType type)
{
	return false;
}

void USkillCheck::Authority_OnSkillCheckTimeout()
{

}

USkillCheck::USkillCheck()
{
	this->_owner = NULL;
	this->_currentInteraction = NULL;
}
