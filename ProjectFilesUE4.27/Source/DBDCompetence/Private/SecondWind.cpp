#include "SecondWind.h"
#include "Net/UnrealNetwork.h"

class AActor;

void USecondWind::Authority_OnHealProgress(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime)
{

}

void USecondWind::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USecondWind, _currentState);
	DOREPLIFETIME(USecondWind, _amountHealed);
}

USecondWind::USecondWind()
{
	this->_currentState = ESecondWindState::Loading;
	this->_amountHealed = 0.000000;
	this->_numberOfHealStateToHealToActivate = 0.000000;
	this->_durationOfHeal = 0.000000;
	this->_brokenStatusEffectClass = NULL;
	this->_applyBrokenEffect = true;
}
