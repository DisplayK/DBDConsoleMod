#include "DBDAttack.h"
#include "Engine/EngineTypes.h"
#include "PostAttackData.h"
#include "EAttackSubstate.h"
#include "AttackSubstateRequestResult.h"
#include "ActionPredictionKey.h"

class ACharacter;
class UAttackableComponent;
class ADBDPlayer;

void UDBDAttack::Server_RequestStateChange_Implementation(const EAttackSubstate state)
{

}

bool UDBDAttack::Server_RequestStateChange_Validate(const EAttackSubstate state)
{
	return true;
}

void UDBDAttack::Server_HitTarget_Implementation(ADBDPlayer* target, const float targetLocationTimestamp, FActionPredictionKey predictionKey)
{

}

bool UDBDAttack::Server_HitTarget_Validate(ADBDPlayer* target, const float targetLocationTimestamp, FActionPredictionKey predictionKey)
{
	return true;
}

void UDBDAttack::Server_HitAttackableComponent_Implementation(UAttackableComponent* attackableComponent)
{

}

bool UDBDAttack::Server_HitAttackableComponent_Validate(UAttackableComponent* attackableComponent)
{
	return true;
}

void UDBDAttack::Server_ClearTargets_Implementation()
{

}

bool UDBDAttack::Server_ClearTargets_Validate()
{
	return true;
}

void UDBDAttack::Multicast_SendPostHitTargetData_Implementation(ADBDPlayer* owningKiller, ADBDPlayer* target, const FPostAttackData& attackData)
{

}

void UDBDAttack::Multicast_RequestStateChange_Implementation(const EAttackSubstate state)
{

}

void UDBDAttack::Multicast_HitTarget_Implementation(ADBDPlayer* target, bool hitCosmeticOnly)
{

}

void UDBDAttack::Multicast_HitAttackableComponent_Implementation(UAttackableComponent* attackableComponent)
{

}

bool UDBDAttack::Multicast_HitAttackableComponent_Validate(UAttackableComponent* attackableComponent)
{
	return true;
}

void UDBDAttack::Multicast_ClearTargets_Implementation()
{

}

void UDBDAttack::Local_OnMovementChanged(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode)
{

}

void UDBDAttack::Client_ReceiveHitResult_Implementation(ADBDPlayer* target, bool isValid, FActionPredictionKey predictionKey)
{

}

void UDBDAttack::Client_ReceiveAttackSubstateRequestResult_Implementation(const FAttackSubstateRequestResult result)
{

}

UDBDAttack::UDBDAttack()
{
	this->_attackType = EAttackType::VE_None;
	this->_useMontage = true;
	this->_damageZone = EDetectionZone::VE_None;
	this->_lockZone = EDetectionZone::VE_None;
	this->_obstructionZone = EDetectionZone::VE_None;
	this->_onlyApplyAccelerationMultiplierWhenWalking = false;
	this->_stateClasses = TMap<EAttackSubstate, TSubclassOf<UDBDAttackSubstate>>();
	this->_localAlreadyHitTargets = TArray<ACharacter*>();
	this->_hitTargets = TArray<ADBDPlayer*>();
	this->_targetsAwaitingServerValidation = TSet<ADBDPlayer*>();
	this->_states = TMap<EAttackSubstate, UDBDAttackSubstate*>();
	this->_hitValidationConfigName = EHitValidatorConfigName::Default;
}
