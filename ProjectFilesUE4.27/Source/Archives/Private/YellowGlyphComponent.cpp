#include "YellowGlyphComponent.h"
#include "ESkillCheckCustomType.h"
#include "UObject/NoExportTypes.h"

class ADBDPlayer;
class AGlyph;

void UYellowGlyphComponent::OnSkillCheck(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player)
{

}

void UYellowGlyphComponent::OnLevelReadyToPlay()
{

}

void UYellowGlyphComponent::Multicast_TeleportGlyph_Implementation(FVector location)
{

}

AGlyph* UYellowGlyphComponent::GetOwningGlyph() const
{
	return NULL;
}

void UYellowGlyphComponent::Authority_TriggerSkillCheck(float currentTickerLocation)
{

}

bool UYellowGlyphComponent::Authority_TeleportGlyph(int32 maxNumberOfTries)
{
	return false;
}

UYellowGlyphComponent::UYellowGlyphComponent()
{
	this->_currentlyInteractingPlayer = NULL;
	this->_skillCheckDuration = 1.200000;
	this->_skillCheckZoneLength = 0.200000;
	this->_skillCheckDelay = 0.500000;
	this->_skillCheckAverageDistance = 0.500000;
	this->_skillCheckDistanceVariance = 0.100000;
	this->_teleportDelay = 2;
	this->_survivorSpawns = TArray<UTileSpawnPoint*>();
	this->_allGlyphs = TArray<AGlyph*>();
}
