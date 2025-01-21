#include "CustomizedAudioComponent.h"
#include "EAudioCustomizationCategory.h"

FName UCustomizedAudioComponent::GetOutfitCustomizedAudioCollectionState() const
{
	return NAME_None;
}

FString UCustomizedAudioComponent::GetAudioSwitchState(EAudioCustomizationCategory audioCustomizationCategory) const
{
	return TEXT("");
}

UCustomizedAudioComponent::UCustomizedAudioComponent()
{
	this->AudioCharacterNameDefaultSwitchState = TEXT("");
	this->AudioCharacterSubNameDefaultSwitchState = TEXT("");
	this->AudioCharacterHeadDefaultSwitchState = TEXT("");
	this->AudioCharacterClothesDefaultSwitchState = TEXT("");
	this->AudioCharacterShoesDefaultSwitchState = TEXT("");
	this->AudioCharacterWeaponDefaultSwitchState = TEXT("");
	this->AudioCharacterAmbianceDefaultSwitchState = TEXT("");
	this->AudioCharacterStateDefaultSwitchState = TEXT("");
	this->AudioCharacterDefaultOutfitCollectionState = NAME_None;
}
