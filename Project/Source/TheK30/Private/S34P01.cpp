#include "S34P01.h"
#include "ChargeStrategy.h"
#include "Net/UnrealNetwork.h"
#include "ESkillCheckCustomType.h"
#include "ECamperDamageState.h"

class ADBDPlayer;

void US34P01::Server_AbilityTwoPressed_Implementation(bool isPressed)
{

}

bool US34P01::Server_AbilityTwoPressed_Validate(bool isPressed)
{
	return true;
}

void US34P01::OnRep_IsPerkActive()
{

}

void US34P01::OnRep_IsAccumulatingTokens()
{

}

void US34P01::OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState)
{

}

void US34P01::Multicast_OnUseTokens_Implementation()
{

}

bool US34P01::IsPerkActive() const
{
	return false;
}

float US34P01::GetInitialCountdownAtLevel() const
{
	return 0.0f;
}

void US34P01::Authority_OnSkillCheckResponse(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange)
{

}

void US34P01::Authority_OnAccumulateRedirectedCharge(const float chargeAmount, const float maxCharge)
{

}

void US34P01::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US34P01, _isPerkActive);
	DOREPLIFETIME(US34P01, _isAccumulatingTokens);
}

US34P01::US34P01()
{
	this->_chargeStrategyWhenActive = CreateDefaultSubobject<UChargeStrategy>(TEXT("ChargeStrategy"));
	this->_redirectedInteraction = NULL;
	this->_isPerkActive = false;
	this->_initialCountdownTime = 0.000000;
	this->_accumulatedPercentMultiplier = 0.660000;
}
