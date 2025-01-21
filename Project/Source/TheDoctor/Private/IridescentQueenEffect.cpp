#include "IridescentQueenEffect.h"
#include "EStaticFieldMovementSpeed.h"
#include "Net/UnrealNetwork.h"
#include "Engine/EngineTypes.h"

class ACamperPlayer;
class UPrimitiveComponent;
class AActor;

void UIridescentQueenEffect::OnRep_ChargeActive()
{

}

void UIridescentQueenEffect::Multicast_DischargeOnSurvivor_Implementation(ACamperPlayer* survivor)
{

}

EStaticFieldMovementSpeed UIridescentQueenEffect::GetStaticFieldMovementSpeed() const
{
	return EStaticFieldMovementSpeed::Slow;
}

void UIridescentQueenEffect::Authority_OnSurvivorOverlappedDischargeZone(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void UIridescentQueenEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UIridescentQueenEffect, _chargeActive);
	DOREPLIFETIME(UIridescentQueenEffect, _charged);
}

UIridescentQueenEffect::UIridescentQueenEffect()
{
	this->_authority_iridescentQueenDischargeDetectionZone = NULL;
	this->_dischargeDetectionZoneHalfHeight = 100.000000;
	this->_dischargeDetectionZoneRadius = 200.000000;
	this->_chargeActive = false;
	this->_charged = false;
}
