#include "WiggleComponent.h"
#include "ESkillCheckCustomType.h"
#include "ChargeableComponent.h"

class ADBDPlayer;

void UWiggleComponent::Server_OnWiggleEnd_Implementation()
{

}

void UWiggleComponent::OnWiggleSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player)
{

}

void UWiggleComponent::OnWiggleInput()
{

}

void UWiggleComponent::OnWiggleEnd()
{

}

void UWiggleComponent::OnPlayerPickedUpStart(ADBDPlayer* picker)
{

}

void UWiggleComponent::OnPlayerPickedUpEnd(ADBDPlayer* picker)
{

}

void UWiggleComponent::OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player)
{

}

void UWiggleComponent::OnLevelReadyToPlay()
{

}

void UWiggleComponent::OnKeyBindingsChanged()
{

}

void UWiggleComponent::OnHideWiggleSkillCheck(ESkillCheckCustomType type)
{

}

UChargeableComponent* UWiggleComponent::GetWiggleChargeable() const
{
	return NULL;
}

void UWiggleComponent::DBD_SetWiggleProgress(const float progressPercent) const
{

}

void UWiggleComponent::Authority_TutorialEndWiggle()
{

}

void UWiggleComponent::Authority_AddWiggleCharge(float chargeAmount)
{

}

UWiggleComponent::UWiggleComponent()
{
	this->AUDIO_EVENT_SKILL_CHECK_WARNING = TEXT("AudioEvent_HUD_SkillCheck_Wiggle_Warning");
	this->AUDIO_EVENT_SKILL_CHECK_GOOD = TEXT("AudioEvent_HUD_SkillCheck_Wiggle_Good");
	this->AUDIO_EVENT_SKILL_CHECK_GREAT = TEXT("AudioEvent_HUD_SkillCheck_Wiggle_Great");
	this->_wiggleProgress = CreateDefaultSubobject<UChargeableComponent>(TEXT("WiggleChargeable"));
	this->_killerWigglingFrom = NULL;
	this->_inputComponent = NULL;
	this->_wiggleInputLockTime = 0.020000;
}
