#include "Generator.h"
#include "Net/UnrealNetwork.h"
#include "PlayerFloatTuple.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

class UObject;
class ADBDPlayer;
class ACamperPlayer;
class UChargeableComponent;
class AActor;
class UInteractionDefinition;

void AGenerator::TriggerSkillCheckFailureLoudNoise(ADBDPlayer* instigatingPlayer)
{

}

bool AGenerator::ShouldDoOverchargeSkillcheck() const
{
	return false;
}

void AGenerator::SetIsOvercharged(const bool overcharged)
{

}

void AGenerator::SetIsBlockedFromCharging(bool isBlockedFromCharging)
{

}

void AGenerator::SetIsAutoCompleted(const bool isAutoCompleted)
{

}

void AGenerator::ResetGenerator()
{

}

void AGenerator::RemovePlayerStartTime(const ADBDPlayer* player)
{

}

void AGenerator::OnUpdateChargeProgress_Implementation(float newPercentComplete)
{

}

void AGenerator::OnRep_IsBlocked()
{

}

void AGenerator::OnRep_DamageData()
{

}

void AGenerator::OnChargeChanged(UChargeableComponent* chargeableComponent, float percent)
{

}

void AGenerator::OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime)
{

}

void AGenerator::Multicast_PlayFailSparksFX_Implementation(ADBDPlayer* player, bool explode)
{

}

void AGenerator::Multicast_OnRepaired_Implementation(const bool showGeneratorCloneLoudNoise, const bool isAutoCompleted, const int32 updatedRemainingGeneratorCount)
{

}

void AGenerator::Multicast_DamageCosmetic_Implementation(bool intense)
{

}

bool AGenerator::IsRegressing() const
{
	return false;
}

bool AGenerator::IsIntenseDamage() const
{
	return false;
}

bool AGenerator::IsBlocked() const
{
	return false;
}

bool AGenerator::IsBeingRepaired() const
{
	return false;
}

bool AGenerator::IsBeingDamagedByKiller() const
{
	return false;
}

TArray<ADBDPlayer*> AGenerator::GetRepairers() const
{
	return TArray<ADBDPlayer*>();
}

TArray<FPlayerFloatTuple> AGenerator::GetPlayerStartTimes() const
{
	return TArray<FPlayerFloatTuple>();
}

float AGenerator::GetPlayerStartTime(const ADBDPlayer* player) const
{
	return 0.0f;
}

bool AGenerator::GetIsBlockedFromCharging()
{
	return false;
}

bool AGenerator::GetIsAutoCompleted() const
{
	return false;
}

UChargeableComponent* AGenerator::GetGeneratorChargeComponent_Implementation() const
{
	return NULL;
}

void AGenerator::DisableInaccessibleInteractors()
{

}

bool AGenerator::CanSurvivorReactToBlockingEntity(const ACamperPlayer* survivor) const
{
	return false;
}

void AGenerator::BroadcastIsDamagedChangedEvent(ADBDPlayer* player)
{

}

void AGenerator::BroadcastGeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor) const
{

}

void AGenerator::Authority_SetRepaired(const bool showGeneratorCloneLoudNoise, const bool isAutoCompleted)
{

}

void AGenerator::Authority_RepairDamage(ADBDPlayer* repairedBy)
{

}

void AGenerator::Authority_RemoveBlockingSource(const UObject* source)
{

}

void AGenerator::Authority_OnChargeChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{

}

void AGenerator::Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime)
{

}

bool AGenerator::Authority_HasRepairedDamage(const ADBDPlayer* player) const
{
	return false;
}

TArray<ADBDPlayer*> AGenerator::Authority_GetRepairingCampers() const
{
	return TArray<ADBDPlayer*>();
}

void AGenerator::Authority_Damage(ADBDPlayer* damagedBy, const float immediateRegressionPercent, bool ignoreBlocked)
{

}

void AGenerator::Authority_CancelRepairInteractions()
{

}

void AGenerator::Authority_AddTimedBlockingSource(const UObject* source, const float blockingTime)
{

}

void AGenerator::Authority_AddBlockingSource(const UObject* source)
{

}

void AGenerator::AddPlayerStartTime(ADBDPlayer* player, float startTime)
{

}

void AGenerator::AddDamagingInteraction(UInteractionDefinition* interaction)
{

}

void AGenerator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AGenerator, _damageData);
	DOREPLIFETIME(AGenerator, _isBlocked);
	DOREPLIFETIME(AGenerator, _isOvercharged);
}

AGenerator::AGenerator()
{
	this->Activated = false;
	this->IsRepaired = false;
	this->WasASMCachePreWarmTriggered = false;
	this->IsPlaySkillcheckAesthetic = true;
	this->KillerOutlineFadeCurve = NULL;
	this->NativePercentComplete = 0.000000;
	this->FireLevelScoreEventOnFix = false;
	this->_activatedTopLightsTransformMap = TMap<FName, FTransform>();
	this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
	this->_isBlocked = false;
	this->_isBlockedFromCharging = false;
	this->_blockingSources = TSet<UObject*>();
	this->_generatorCharge = NULL;
	this->_playerStartTimes = TArray<FPlayerFloatTuple>();
	this->_isAutoCompleted = false;
	this->_isOvercharged = false;
	this->_coopRepairTracker = NULL;
	this->_VFX_LightDistanceDefault = 350.000000;
	this->_damagingInteractions = TArray<UInteractionDefinition*>();
}
