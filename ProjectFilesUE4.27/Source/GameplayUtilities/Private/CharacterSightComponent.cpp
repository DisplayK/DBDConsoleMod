#include "CharacterSightComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Character.h"

void UCharacterSightComponent::SetScreenVisibilityZoneRadiusPercent(float valueX, float valueY)
{

}

void UCharacterSightComponent::SetMinimumCharacterVisiblePixelsPercent(float trigger, float untrigger)
{

}

void UCharacterSightComponent::SetMinimumCharacterScreenPercentNotInZone(float trigger, float untrigger)
{

}

void UCharacterSightComponent::SetMinimumCharacterScreenPercentInZone(float trigger, float untrigger)
{

}

void UCharacterSightComponent::SetMaximumSightDistance(float value)
{

}

void UCharacterSightComponent::Server_UpdateDiscernedCharacters_Implementation(const TArray<ACharacter*>& characters)
{

}

bool UCharacterSightComponent::Server_UpdateDiscernedCharacters_Validate(const TArray<ACharacter*>& characters)
{
	return true;
}

void UCharacterSightComponent::OnRep_DiscernibleCharacters()
{

}

void UCharacterSightComponent::OnRep_CanSee()
{

}

void UCharacterSightComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCharacterSightComponent, _discernedCharacters);
	DOREPLIFETIME(UCharacterSightComponent, _canSee);
}

UCharacterSightComponent::UCharacterSightComponent()
{
	this->_minimumCharacterScreenPercentInZoneTrigger = 0.000500;
	this->_minimumCharacterScreenPercentInZoneUntrigger = 0.000450;
	this->_minimumCharacterScreenPercentNotInZoneTrigger = 0.100000;
	this->_minimumCharacterScreenPercentNotInZoneUntrigger = 0.090000;
	this->_minimumCharacterVisiblePixelsPercentTrigger = 0.300000;
	this->_minimumCharacterVisiblePixelsPercentUntrigger = 0.250000;
	this->_maximumSightDistance = 0.000000;
	this->_screenVisibilityZoneRadiusPercentX = 0.600000;
	this->_screenVisibilityZoneRadiusPercentY = 0.900000;
	this->_sightingDelay = 0.000000;
	this->_discerningDelay = 0.000000;
	this->_undiscerningDelay = 0.000000;
	this->_sightableCharacterClass = ACharacter::StaticClass();
	this->_discernedCharacters = TArray<FAuthorityDiscernedCharacter>();
	this->_localDiscernibleCharacters = TArray<FDiscernibleCharacter>();
	this->_debugMode = false;
	this->_canSee = true;
}
