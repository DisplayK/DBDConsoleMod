#include "CamperPlayer.h"
#include "ECamperImmobilizeState.h"
#include "ESkillCheckCustomType.h"
#include "ECamperGuidedAction.h"
#include "DBDPawnSensingComponent.h"
#include "SpherePlayerOverlapComponent.h"
#include "Engine/EngineTypes.h"
#include "SurviveTimerScoreEventComponent.h"
#include "Net/UnrealNetwork.h"
#include "EAuthoritativeMovementFlag.h"
#include "CameraAttachmentComponent.h"
#include "EHealthType.h"
#include "UObject/NoExportTypes.h"
#include "MoveComponentToComponent.h"
#include "CarriedMovementComponent.h"
#include "TerrorRadiusReceiverComponent.h"
#include "CharmSpawnerComponent.h"
#include "Components/CapsuleComponent.h"
#include "StalkedComponent.h"
#include "ScreamComponent.h"
#include "CamperStillnessTrackerComponent.h"
#include "CamperHealthComponent.h"
#include "CharacterPositionRecorderComponent.h"
#include "CamperSlashableComponent.h"
#include "ChargeableComponent.h"
#include "CamperBloodTrailComponent.h"
#include "CamperEndGameComponent.h"
#include "KillerInstinctComponent.h"
#include "HookableComponent.h"
#include "HookAntiCampingComponent.h"
#include "ProtectionHitComponent.h"

class UPrimitiveComponent;
class UAkComponent;
class ADBDPlayer;
class AActor;
class UAnimationMontageSlave;
class APawn;
class AReverseBearTrap;
class ACamperPlayer;
class UDBDClipRegionComponent;
class UChaseeCharacterComponent;
class UDBDCamperData;
class UInteractionDefinition;

void ACamperPlayer::UpdateHealingTimer(float deltaTime)
{

}

void ACamperPlayer::TriggerAfflictionHUDFeedback()
{

}

void ACamperPlayer::StopHealingTimer()
{

}

void ACamperPlayer::StartHealingTimer(float time)
{

}

void ACamperPlayer::SetIsSkillCheckFailed(bool isSkillCheckFailed)
{

}

void ACamperPlayer::SetIsHealingKOCamper(bool isHealingKOCamper)
{

}

void ACamperPlayer::SetGuidedActionLocal(ECamperGuidedAction action)
{

}

void ACamperPlayer::SetGuidedAction(ECamperGuidedAction action)
{

}

void ACamperPlayer::SetBeingCarried(bool isBeingCarried, ADBDPlayer* carrier)
{

}

void ACamperPlayer::Server_SetRunInput_Implementation(bool pressed)
{

}

void ACamperPlayer::Server_SetOverlappingEscape_Implementation(AActor* escape)
{

}

void ACamperPlayer::RunLocked(bool lock)
{

}

void ACamperPlayer::ResetPotentialSaviors()
{

}

void ACamperPlayer::ResetCameraAttach()
{

}

void ACamperPlayer::OnUnhooked()
{

}

void ACamperPlayer::OnRep_SprintEffect()
{

}

void ACamperPlayer::OnRep_RunInputPressed()
{

}

void ACamperPlayer::OnProximityEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void ACamperPlayer::OnPickUpEnter(ADBDPlayer* picker, float transitionTime)
{

}

void ACamperPlayer::OnPickUpDenied()
{

}

void ACamperPlayer::OnPawnSensed(APawn* pawn)
{

}

void ACamperPlayer::OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession)
{

}

void ACamperPlayer::OnHpSlotSkillCheckResponseAesthetic(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange)
{

}

void ACamperPlayer::OnHooked()
{

}

void ACamperPlayer::OnFinishedPlaying()
{

}

void ACamperPlayer::OnDroppedStart()
{

}

void ACamperPlayer::OnDroppedEnd(bool clearLeader)
{

}

void ACamperPlayer::Multicast_SetOverlappingEscape_Implementation(AActor* escape)
{

}

void ACamperPlayer::Multicast_SetImmobilized_Implementation(ECamperImmobilizeState state)
{

}

void ACamperPlayer::Multicast_SetHookEscapeAutoFail_Implementation(bool enabled)
{

}

void ACamperPlayer::Multicast_SetGuidedAction_Implementation(ECamperGuidedAction action)
{

}

void ACamperPlayer::Multicast_SetAuthoritativeMovementFlag_Implementation(EAuthoritativeMovementFlag flag, bool value)
{

}

void ACamperPlayer::Multicast_RemoveReverseBearTrap_Implementation()
{

}

void ACamperPlayer::Multicast_EscapeItemEvents_Implementation(bool isItemFromSpawn)
{

}

void ACamperPlayer::Local_SetImmobilized(ECamperImmobilizeState state)
{

}

void ACamperPlayer::Kill(EHealthType healthType)
{

}

bool ACamperPlayer::IsUnintentionallyImmobilized() const
{
	return false;
}

bool ACamperPlayer::IsUnhookingSelf() const
{
	return false;
}

bool ACamperPlayer::IsTrapped() const
{
	return false;
}

bool ACamperPlayer::IsSacrificed() const
{
	return false;
}

bool ACamperPlayer::IsRunLocked()
{
	return false;
}

bool ACamperPlayer::IsObsessionTarget() const
{
	return false;
}

bool ACamperPlayer::IsMovementGuided() const
{
	return false;
}

bool ACamperPlayer::IsInNeed() const
{
	return false;
}

bool ACamperPlayer::IsInDeathBed() const
{
	return false;
}

bool ACamperPlayer::IsImmobilized() const
{
	return false;
}

bool ACamperPlayer::IsHooked() const
{
	return false;
}

bool ACamperPlayer::IsHealingTimerExpired() const
{
	return false;
}

bool ACamperPlayer::IsGuidedBySlasher() const
{
	return false;
}

bool ACamperPlayer::IsEscaped() const
{
	return false;
}

bool ACamperPlayer::IsDeadOrInParadise() const
{
	return false;
}

bool ACamperPlayer::IsCrawling() const
{
	return false;
}

bool ACamperPlayer::IsBeingUnhooked() const
{
	return false;
}

bool ACamperPlayer::IsBeingPutOnHook() const
{
	return false;
}

bool ACamperPlayer::IsBeingPutDown() const
{
	return false;
}

bool ACamperPlayer::IsBeingPulledFromCloset() const
{
	return false;
}

bool ACamperPlayer::IsBeingPickedUp() const
{
	return false;
}

bool ACamperPlayer::IsBeingMended() const
{
	return false;
}

bool ACamperPlayer::IsBeingKilled() const
{
	return false;
}

bool ACamperPlayer::IsBeingInteractedWith() const
{
	return false;
}

bool ACamperPlayer::IsBeingHealed() const
{
	return false;
}

bool ACamperPlayer::IsBeingEndGameSacrificed() const
{
	return false;
}

bool ACamperPlayer::IsBeingCarried() const
{
	return false;
}

void ACamperPlayer::Input_ToggleRun()
{

}

void ACamperPlayer::HatchEscapeZoneEntered(AActor* escape)
{

}

bool ACamperPlayer::HasReverseBearTrap() const
{
	return false;
}

bool ACamperPlayer::HasHitEvents() const
{
	return false;
}

bool ACamperPlayer::HasGuidedAction() const
{
	return false;
}

FRotator ACamperPlayer::GetToAimPointRotation() const
{
	return FRotator{};
}

UTerrorRadiusReceiverComponent* ACamperPlayer::GetTerrorRadiusReceiverComponent() const
{
	return NULL;
}

float ACamperPlayer::GetStillness() const
{
	return 0.0f;
}

AReverseBearTrap* ACamperPlayer::GetReverseBearTrap() const
{
	return NULL;
}

float ACamperPlayer::GetPercentHealingTimer() const
{
	return 0.0f;
}

AActor* ACamperPlayer::GetOverlappingEscape() const
{
	return NULL;
}

float ACamperPlayer::GetObsessionTargetWeight() const
{
	return 0.0f;
}

int32 ACamperPlayer::GetNumberOfEntityRenderRegions() const
{
	return 0;
}

UAkComponent* ACamperPlayer::GetNoOcclusionAudioComponent() const
{
	return NULL;
}

UAnimationMontageSlave* ACamperPlayer::GetMontageFollower()
{
	return NULL;
}

UMoveComponentToComponent* ACamperPlayer::GetMeshMover() const
{
	return NULL;
}

float ACamperPlayer::GetMaxGruntDistance(bool isLocalPlayerKiller) const
{
	return 0.0f;
}

bool ACamperPlayer::GetIsWiggleProgressionAllowed() const
{
	return false;
}

bool ACamperPlayer::GetIsSkillCheckFailed()
{
	return false;
}

bool ACamperPlayer::GetIsHealingKOCamper()
{
	return false;
}

bool ACamperPlayer::GetIsBeingDissolved() const
{
	return false;
}

ECamperImmobilizeState ACamperPlayer::GetImmobilizedState() const
{
	return ECamperImmobilizeState::VE_None;
}

UHookableComponent* ACamperPlayer::GetHookableComponent() const
{
	return NULL;
}

UCamperHealthComponent* ACamperPlayer::GetHealthComponent() const
{
	return NULL;
}

ECamperGuidedAction ACamperPlayer::GetGuidedAction() const
{
	return ECamperGuidedAction::VE_None;
}

UDBDClipRegionComponent* ACamperPlayer::GetEntityRenderRegionAtIndex(int32 InIndex) const
{
	return NULL;
}

UChaseeCharacterComponent* ACamperPlayer::GetChaseeCharacterComponent() const
{
	return NULL;
}

UCamperStillnessTrackerComponent* ACamperPlayer::GetCamperStillnessComponent()
{
	return NULL;
}

UDBDCamperData* ACamperPlayer::GetCamperData() const
{
	return NULL;
}

UCameraAttachmentComponent* ACamperPlayer::GetCameraAttachmentComponent() const
{
	return NULL;
}

UCamperBloodTrailComponent* ACamperPlayer::GetBloodTrailComponent() const
{
	return NULL;
}

UAkComponent* ACamperPlayer::GetAttenuationAudioComponent() const
{
	return NULL;
}

TArray<UDBDClipRegionComponent*> ACamperPlayer::GetAllEntityRenderRegions() const
{
	return TArray<UDBDClipRegionComponent*>();
}

FVector ACamperPlayer::GetAimPoint() const
{
	return FVector{};
}

void ACamperPlayer::EscapeTutorial()
{

}

void ACamperPlayer::DetachFromGuidingPlayer()
{

}

void ACamperPlayer::DBD_SetSurvivorCameraArmLengthCommand(float cameraArmLength)
{

}

void ACamperPlayer::DBD_SetImmobilized(ECamperImmobilizeState state)
{

}

void ACamperPlayer::DBD_LeaveParadise()
{

}

void ACamperPlayer::DBD_ForceRun(bool forced)
{

}

void ACamperPlayer::DBD_CheatEscaped()
{

}

float ACamperPlayer::ComputeInteractionSuccessPercentage(const UInteractionDefinition* interaction)
{
	return 0.0f;
}

bool ACamperPlayer::ComputeHookEscapeResult()
{
	return false;
}

bool ACamperPlayer::ComputeBeartrapEscapeResult()
{
	return false;
}

void ACamperPlayer::Client_OnSlashedOutOfTrap_Implementation(ADBDPlayer* requester)
{

}

bool ACamperPlayer::CanRushQuietly() const
{
	return false;
}

bool ACamperPlayer::CanBeShocked() const
{
	return false;
}

bool ACamperPlayer::CanBePickedUp() const
{
	return false;
}

bool ACamperPlayer::CanBeKilled() const
{
	return false;
}

void ACamperPlayer::CallOnDroppedByBearTrap()
{

}

void ACamperPlayer::Authority_SetImmobilized(ECamperImmobilizeState state)
{

}

void ACamperPlayer::Authority_OnSlashed(ADBDPlayer* attacker)
{

}

void ACamperPlayer::Authority_DropItemAtLastSafePosition()
{

}

void ACamperPlayer::Authority_ApplySprintEffect()
{

}

void ACamperPlayer::AttachToGuidingPlayer()
{

}

void ACamperPlayer::ActionInputReleased()
{

}

void ACamperPlayer::ActionInputPressed()
{

}

bool ACamperPlayer::AcceptsHealing() const
{
	return false;
}

void ACamperPlayer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACamperPlayer, _escape);
	DOREPLIFETIME(ACamperPlayer, _lastEscaped);
	DOREPLIFETIME(ACamperPlayer, _runInputPressed);
	DOREPLIFETIME(ACamperPlayer, _sprintEffect);
}

ACamperPlayer::ACamperPlayer()
{
	this->ReverseBearTrapAttachSocket = NAME_None;
	this->isBeingDissolved = false;
	this->FootprintAudibleRange = 1200.000000;
	this->StalkedComponent = CreateDefaultSubobject<UStalkedComponent>(TEXT("StalkedComponent"));
	this->CameraResetToleranceYaw = 2.000000;
	this->CameraResetTolerancePitch = 2.000000;
	this->CameraRecenterOffsetYaw = 90.000000;
	this->CameraRecenterOffsetPitch = 30.000000;
	this->Gender = EGender::VE_Male;
	this->DropStaggerDuration = NULL;
	this->DropStaggerMaxSpeed = NULL;
	this->TimeforDeathWhileCrawling = 60.000000;
	this->TimeforDeathWhileHooked = 60.000000;
	this->SecondsUntilFootprintTrigger = 0.100000;
	this->TriggerAfflictionHUDIntro = false;
	this->_storedPlayerController = NULL;
	this->_stillnessTracker = CreateDefaultSubobject<UCamperStillnessTrackerComponent>(TEXT("StillnessTracker"));
	this->PartiallyHiddenStillnessThreshold = 0.000000;
	this->_escape = NULL;
	this->_overlappingEscape = NULL;
	this->ProximityZone = CreateDefaultSubobject<USpherePlayerOverlapComponent>(TEXT("ProximityZone"));
	this->SlashableZone = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Slashable"));
	this->HookSlashableZone = CreateDefaultSubobject<UCapsuleComponent>(TEXT("HookSlashable"));
	this->_camperSlashable = CreateDefaultSubobject<UCamperSlashableComponent>(TEXT("CamperSlashable"));
	this->_terrorRadiusReceiverComponent = CreateDefaultSubobject<UTerrorRadiusReceiverComponent>(TEXT("TerrorRadiusReceiverComponent"));
	this->CrouchCapsuleHalfHeight = 0.000000;
	this->IKOffsetRightFoot = 0.000000;
	this->IKOffsetLeftFoot = 0.000000;
	this->_camperSensor = CreateDefaultSubobject<UDBDPawnSensingComponent>(TEXT("CamperSensor"));
	this->_surviveTimerScoreComponent = CreateDefaultSubobject<USurviveTimerScoreEventComponent>(TEXT("SurviveTimerScoreComponent"));
	this->_foundCampers = TArray<ADBDPlayer*>();
	this->_potentialSaviors = TArray<ADBDPlayer*>();
	this->_healthComponent = CreateDefaultSubobject<UCamperHealthComponent>(TEXT("CamperHealthComponent"));
	this->_hpSlot01 = CreateDefaultSubobject<UChargeableComponent>(TEXT("HPSlot01"));
	this->_hpSlot02 = CreateDefaultSubobject<UChargeableComponent>(TEXT("HPSlot02"));
	this->_mendChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("MendChargeable"));
	this->_bloodTrailSettings = NULL;
	this->_bloodTrailComponent = CreateDefaultSubobject<UCamperBloodTrailComponent>(TEXT("CamperBloodTrailComponent"));
	this->_killerInstinctComponent = CreateDefaultSubobject<UKillerInstinctComponent>(TEXT("KillerInstinctComponent"));
	this->_cameraAttachment = CreateDefaultSubobject<UCameraAttachmentComponent>(TEXT("CameraAttachmentComponent"));
	this->_charmSpawnerComponent = CreateDefaultSubobject<UCharmSpawnerComponent>(TEXT("CharmSpawnerComponent"));
	this->_hookableComponent = CreateDefaultSubobject<UHookableComponent>(TEXT("HookableComponent"));
	this->_hookAntiCampingComponent = CreateDefaultSubobject<UHookAntiCampingComponent>(TEXT("HookAntiCampingComponent"));
	this->_protectionHitComponent = CreateDefaultSubobject<UProtectionHitComponent>(TEXT("ProtectionHitComponent"));
	this->_screamComponent = CreateDefaultSubobject<UScreamComponent>(TEXT("ScreamComponent"));
	this->_positionRecorder = CreateDefaultSubobject<UCharacterPositionRecorderComponent>(TEXT("Position Recorder"));
	this->_lastEscaped = false;
	this->_runInputPressed = false;
	this->_trapIndicatorActive = false;
	this->_camperEndGameComponent = CreateDefaultSubobject<UCamperEndGameComponent>(TEXT("CamperEndGameComponent"));
	this->_noOcclusionAkComponent = NULL;
	this->_attenuationAkComponent = NULL;
	this->_isHealingKOCamper = false;
	this->_isSkillCheckFailed = false;
	this->_isBeingSacrificed = false;
	this->_isWiggleProgressionAllowed = true;
	this->_meshMover = CreateDefaultSubobject<UMoveComponentToComponent>(TEXT("MeshMover"));
	this->_carriedMovementComponent = CreateDefaultSubobject<UCarriedMovementComponent>(TEXT("CarriedMovementComponent"));
	this->_sprintEffect = NULL;
}
