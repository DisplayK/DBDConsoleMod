#include "DBDAIStateComponent.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class AActor;

void UDBDAIStateComponent::OnUniqueGameplayEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target)
{

}

void UDBDAIStateComponent::OnStartAimingEventDispatched(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UDBDAIStateComponent::OnSpecialAttackEventDispatched(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

UDBDAIStateComponent::UDBDAIStateComponent()
{
	this->UnsafeStateAtHookedCount = 1;
	this->DireStateAtHookedCount = 2;
	this->MidObjectiveStateProgressionRatio = 0.600000;
	this->GameStateTable = TMap<EAIObjectiveState, FDangerStateGameStateMapContainer>();
	this->PressureZoneLevelTable = TMap<EAIDifficultyLevel, FGameStatePressureZoneLevelMapContainer>();
	this->PressureZoneHighToLowRangeLerpRatios = TMap<EAIPressureZoneLevel, float>();
	this->DefaultChasedPhaseOutDuration = 8.000000;
	this->InjuredChasedPhaseOutDuration = 12.000000;
	this->DefaultBeingAimedAtPhaseOutDuration = 8.000000;
	this->InjuredBeingAimedAtPhaseOutDuration = 12.000000;
	this->StimulusWasInSightDuration = 2.000000;
	this->LoSFoVToStimulusCheckPeriod = 1.000000;
	this->LoSToStimulusValidDuration = 2.000000;
	this->FoVToStimulusValidDuration = 1.000000;
}
