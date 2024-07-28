#include "ConjoinedTwin.h"
#include "RangeToActorsTrackerComponent.h"
#include "GameplayTagContainer.h"
#include "HitValidatorConfigurator.h"
#include "GameEventData.h"
#include "DBDAttackerComponent.h"
#include "CustomizedAudioComponent.h"
#include "FirecrackerEffectData.h"
#include "KillerBlindingFXComponent.h"
#include "HitValidatorComponent.h"
#include "TwinOutlineUpdateStrategy.h"
#include "AnimationMontageSlave.h"
#include "TwinFirstPersonViewComponent.h"
#include "FlashlightableComponent.h"
#include "BlindFlashlightTargetFXComponent.h"
#include "FirecrackerEffectHandlerComponent.h"
#include "TwinPossessNegationEffectComponent.h"

void AConjoinedTwin::Server_SendAttackInput_Implementation(bool pressed)
{

}

bool AConjoinedTwin::Server_SendAttackInput_Validate(bool pressed)
{
	return true;
}

void AConjoinedTwin::OnFinishedPlayingEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void AConjoinedTwin::Authority_OnFirecrackerInRangeBegin(const FFirecrackerEffectData& effectData)
{

}

AConjoinedTwin::AConjoinedTwin()
{
	this->_restrictedPossessionAreaTracker = CreateDefaultSubobject<URangeToActorsTrackerComponent>(TEXT("RestrictedPossessionAreaTracker"));
	this->_twinOutlineUpdateStrategy = CreateDefaultSubobject<UTwinOutlineUpdateStrategy>(TEXT("TwinOutlineUpdateStrategy"));
	this->_twinLullabyAudioComponent = NULL;
	this->_twinBlindingFX = CreateDefaultSubobject<UKillerBlindingFXComponent>(TEXT("TwinBlindingFX"));
	this->_customizedAudio = CreateDefaultSubobject<UCustomizedAudioComponent>(TEXT("CustomizedAudioComponent"));
	this->_attackerComponent = CreateDefaultSubobject<UDBDAttackerComponent>(TEXT("AttackerComponent"));
	this->_hitValidator = CreateDefaultSubobject<UHitValidatorComponent>(TEXT("Hit Validator"));
	this->_hitValidationConfigurator = CreateDefaultSubobject<UHitValidatorConfigurator>(TEXT("Hit Validator Configurator"));
	this->_animationFollower = CreateDefaultSubobject<UAnimationMontageSlave>(TEXT("AnimationMontageSlave"));
	this->_firstPersonViewComponent = CreateDefaultSubobject<UTwinFirstPersonViewComponent>(TEXT("FirstPersonViewComponent"));
	this->_eyesFlashlightable = CreateDefaultSubobject<UFlashlightableComponent>(TEXT("EyesFlashlightable"));
	this->_blindFlashlightTargetFXComponent = CreateDefaultSubobject<UBlindFlashlightTargetFXComponent>(TEXT("BlindFlashlightTargetFX"));
	this->_firecrackerEffectHandlerComponent = CreateDefaultSubobject<UFirecrackerEffectHandlerComponent>(TEXT("FirecrackerEffectHandlerComponent"));
	this->_twinsBloodhoundEffect = NULL;
	this->_twinsRevealKillerAuraEffect = NULL;
	this->_twinsDormantKillerInstinctEffect = NULL;
	this->_twinsRevealAuraOnAttachedToSurvivorEffect = NULL;
	this->_twinsRevealAuraOnRecallReadyEffect = NULL;
	this->_timeDeafenedOnTriggerEffect = NULL;
	this->_twinPossessNegationEffectComponent = CreateDefaultSubobject<UTwinPossessNegationEffectComponent>(TEXT("TwinPossessNegationEffectComponent"));
}
