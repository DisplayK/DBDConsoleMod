#include "Glyph.h"
#include "Interactor.h"
#include "Components/StaticMeshComponent.h"
#include "DBDOutlineComponent.h"
#include "Net/UnrealNetwork.h"
#include "GlyphInteraction.h"
#include "NearTrackedActorComponent.h"
#include "Components/BoxComponent.h"
#include "ChargeableComponent.h"

class ADBDPlayer;
class AActor;

void AGlyph::OnRep_PlayersWithVisibility()
{

}

bool AGlyph::IsPlayerOwner(const ADBDPlayer* player) const
{
	return false;
}

bool AGlyph::DoesLocalPlayerHaveVisibility()
{
	return false;
}

void AGlyph::Authority_TrackPlayerWithBehaviourID(const ADBDPlayer* dbdPlayer)
{

}

void AGlyph::Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, const AActor* trackedActor)
{

}

void AGlyph::Authority_OnIntroCompleted()
{

}

void AGlyph::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AGlyph, _playersWithVisibility);
	DOREPLIFETIME(AGlyph, _isGlyphActivatedForPlayer);
	DOREPLIFETIME(AGlyph, _isActive);
	DOREPLIFETIME(AGlyph, _playersThatInteractedWithGlyph);
}

AGlyph::AGlyph()
{
	this->_playersWithVisibility = TArray<ADBDPlayer*>();
	this->_oldPlayersWithVisibility = TArray<ADBDPlayer*>();
	this->_specialBehaviourId = NAME_None;
	this->_allowedPlayerType = EAllowedPlayerType::All;
	this->_canOnlyBeInteractedOnByOnePlayer = false;
	this->_canBeInteractedAfterQuestCompleted = false;
	this->lastPlayerToStartInteraction = NULL;
	this->_isGlyphActivatedForPlayer = TArray<TWeakObjectPtr<ADBDPlayerState>>();
	this->_grantChallengeProgress = true;
	this->_grantQuestEventProgressOnInteraction = true;
	this->_isActive = true;
	this->_glyphInteraction = CreateDefaultSubobject<UGlyphInteraction>(TEXT("GlyphInteraction"));
	this->_glyphInteractionKiller = CreateDefaultSubobject<UGlyphInteraction>(TEXT("GlyphInteractionKiller"));
	this->_glyphInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("GlyphInteractionChargeable"));
	this->_glyphInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("GlyphInteractionChargeableKiller"));
	this->_glyphInteractor = CreateDefaultSubobject<UInteractor>(TEXT("GlyphInteractor"));
	this->_nearTrackedActorComponent = CreateDefaultSubobject<UNearTrackedActorComponent>(TEXT("NearPlayerTracker"));
	this->_glyphInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("GlyphInteractionZone"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
	this->_glyphMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GlyphMesh"));
	this->_isScoreRewardExponentialForMultipleGlyphs = false;
	this->_playersThatInteractedWithGlyph = TArray<ADBDPlayer*>();
}
