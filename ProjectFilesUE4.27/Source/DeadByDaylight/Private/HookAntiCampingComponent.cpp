#include "HookAntiCampingComponent.h"
#include "Net/UnrealNetwork.h"

void UHookAntiCampingComponent::OnRep_UnhookingSelfAllowedDuringStrugglePhase()
{

}

float UHookAntiCampingComponent::GetCampTimerCompletionPercent() const
{
	return 0.0f;
}

bool UHookAntiCampingComponent::CanUnhookWithAutoSuccess() const
{
	return false;
}

void UHookAntiCampingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UHookAntiCampingComponent, IsAntiCampingFeatureEnabled);
	DOREPLIFETIME(UHookAntiCampingComponent, _chargeSpeed);
	DOREPLIFETIME(UHookAntiCampingComponent, _timerPercent);
	DOREPLIFETIME(UHookAntiCampingComponent, _unhookingSelfAllowedDuringStrugglePhase);
}

UHookAntiCampingComponent::UHookAntiCampingComponent()
{
	this->IsAntiCampingFeatureEnabled = false;
	this->_detectionRange = 1600.000000;
	this->_timeToActivate = 100.000000;
	this->_enduranceEffectActiveTime = 15.000000;
	this->_chargeSpeedCurve = NULL;
	this->_addEnduranceEffectAfterSelfUnhook = false;
	this->_enduranceEffectClass = NULL;
	this->_selfUnhookAlwaysSucceedEffectClass = NULL;
	this->_selfUnhookAlwaysSucceedEffect = NULL;
	this->_chargeSpeed = 0.000000;
	this->_timerPercent = 0.000000;
	this->_unhookingSelfAllowedDuringStrugglePhase = false;
}
