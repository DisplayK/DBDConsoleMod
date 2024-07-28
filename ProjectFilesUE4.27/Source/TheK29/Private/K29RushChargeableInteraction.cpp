#include "K29RushChargeableInteraction.h"
#include "K29GuidedMovementInstance.h"
#include "EK29RushPhase.h"
#include "UObject/NoExportTypes.h"
#include "ECamperDamageState.h"

class ACamperPlayer;
class AActor;

void UK29RushChargeableInteraction::Server_SlashAtSurvivor_Implementation(ACamperPlayer* survivor, const FVector& currentKillerPosition)
{

}

void UK29RushChargeableInteraction::Server_SetCurrentRushAsEndingInCollision_Implementation(bool hitOtherSurvivor)
{

}

void UK29RushChargeableInteraction::Server_SetCurrentRushAsEndingAtLedge_Implementation()
{

}

void UK29RushChargeableInteraction::Server_SetCurrentRush_Implementation(const FK29GuidedMovementInstance& newRushInstance, const EK29RushPhase targetPhase)
{

}

void UK29RushChargeableInteraction::Server_DestroyPalletOrBreakable_Implementation(AActor* destroyable)
{

}

void UK29RushChargeableInteraction::Server_DamageSurvivorAsCollision_Implementation(ACamperPlayer* survivor, const FVector& currentKillerPosition)
{

}

void UK29RushChargeableInteraction::Server_ChangeRushPhase_Implementation(const EK29RushPhase newRushPhase, const bool forceLocallyControlled)
{

}

void UK29RushChargeableInteraction::Server_CancelInteraction_Implementation()
{

}

void UK29RushChargeableInteraction::RushComplete(const bool rushEndedNaturally)
{

}

void UK29RushChargeableInteraction::OnWindowOfOpportunityTimeoutCooldownEnd() const
{

}

void UK29RushChargeableInteraction::OnSubsequentRushOpportunityTimeout()
{

}

void UK29RushChargeableInteraction::OnSmashOutTimerCompleted()
{

}

void UK29RushChargeableInteraction::OnInstantCarryTimerComplete(ACamperPlayer* survivorToCarry)
{

}

void UK29RushChargeableInteraction::OnGrabbingTransitionComplete()
{

}

void UK29RushChargeableInteraction::OnCollisionEnableTimerComplete()
{

}

void UK29RushChargeableInteraction::Multicast_SmashSurvivor_Implementation(ACamperPlayer* survivorToCarry)
{

}

void UK29RushChargeableInteraction::Multicast_SlashAtSurvivor_Implementation(ACamperPlayer* survivor, const FVector& currentKillerPosition, const ECamperDamageState survivorTargetDamageState)
{

}

void UK29RushChargeableInteraction::Multicast_SetCurrentRushAsEndingInCollision_Implementation()
{

}

void UK29RushChargeableInteraction::Multicast_SetCurrentRushAsEndingAtLedge_Implementation()
{

}

void UK29RushChargeableInteraction::Multicast_SetCurrentRush_Implementation(const FK29GuidedMovementInstance& newRushInstance)
{

}

void UK29RushChargeableInteraction::Multicast_RushValid_Implementation()
{

}

void UK29RushChargeableInteraction::Multicast_RushInvalid_Implementation()
{

}

void UK29RushChargeableInteraction::Multicast_DestroyPalletOrBreakable_Implementation(AActor* destroyable)
{

}

void UK29RushChargeableInteraction::Multicast_DamageSurvivorAsCollision_Implementation(const FVector& currentKillerPosition, ACamperPlayer* collidedSurvivor, const ECamperDamageState survivorTargetDamageState)
{

}

void UK29RushChargeableInteraction::Multicast_ChangeRushPhase_Implementation(const EK29RushPhase newRushPhase, const bool forceLocallyControlled)
{

}

void UK29RushChargeableInteraction::Multicast_CarrySurvivor_Implementation(ACamperPlayer* survivorToCarry)
{

}

void UK29RushChargeableInteraction::Multicast_CancelInteraction_Implementation()
{

}

float UK29RushChargeableInteraction::GetRushTimeLeft() const
{
	return 0.0f;
}

void UK29RushChargeableInteraction::BounceComplete()
{

}

UK29RushChargeableInteraction::UK29RushChargeableInteraction()
{
	this->_rushChargesHandlerComponent = NULL;
	this->_powerStatusHandlerComponent = NULL;
	this->_pathingCalculatorComponent = NULL;
	this->_powerCollectable = NULL;
	this->_movementSpeedSettingsByState = TMap<EK29RushPhase, FK29RushMovementSpeedSetting>();
	this->_subsequentRushTimerTimeoutMovementSpeedMultiplierCurve = NULL;
	this->_percentageForRushChargeEndAvailability = 0.950000;
	this->_distanceInCmForNearMiss = 400.000000;
	this->_rushDetectionBackwardsOffset = 20.000000;
	this->_revealToSurvivorsStatusEffect = NULL;
	this->_rotationStrengthTransitionTime = 0.250000;
	this->_movementSpeedCurveBetweenRushesIncreased = NULL;
	this->_movementSpeedCurveChargingIncreased = NULL;
	this->_rushMovementSpeedCurve = NULL;
	this->_rushMovementSpeedCurveWithSurvivor = NULL;
	this->_killerRushSmashAnimationName = TEXT("Rush_Smash");
	this->_survivorRushSmashAnimationName = TEXT("K29_Smash");
	this->_killerRushToCarryAnimationName = TEXT("RushToCarry");
	this->_survivorRushToCarryAnimationName = TEXT("K29_RushToCarry");
	this->_survivorRushDropAnimationName = TEXT("K29_Drop");
	this->_killerRushCooldownAnimationName = TEXT("Rush_Cooldown");
	this->_animTagFPV = TEXT("AnimTag_FPV");
	this->_lagInSecondsUntilRushIsInvalid = 0.400000;
	this->_rushDropForwardDistance = 50.000000;
	this->_decisiveStrikeSkillCheckDelay = 3.500000;
	this->_isLagChecked = false;
	this->_survivorInteractionPreventingGrab = TArray<TSubclassOf<UInteractionDefinition>>();
}
