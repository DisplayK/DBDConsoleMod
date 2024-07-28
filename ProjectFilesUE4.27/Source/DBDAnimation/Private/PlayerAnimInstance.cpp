#include "PlayerAnimInstance.h"

class ADBDPlayer;

void UPlayerAnimInstance::OnLevelReadyToPlay()
{

}

void UPlayerAnimInstance::OnIntroCompleted()
{

}

ADBDPlayer* UPlayerAnimInstance::GetOwningPlayer() const
{
	return NULL;
}

UPlayerAnimInstance::UPlayerAnimInstance()
{
	this->_owningPlayer = NULL;
	this->_taggedAnimCollections = TArray<FTaggedAnimCollection>();
	this->_animations = TMap<FGameplayTag, UAnimSequence*>();
	this->_blendspaces = TMap<FGameplayTag, UBlendSpace*>();
	this->_aimoffsets = TMap<FGameplayTag, UAimOffsetBlendSpace*>();
	this->_blendspaces1d = TMap<FGameplayTag, UBlendSpace1D*>();
	this->_aimoffsets1d = TMap<FGameplayTag, UAimOffsetBlendSpace1D*>();
	this->_selectors = TMap<FGameplayTag, FAnimSequenceSelector>();
	this->_isInParadise = false;
	this->_isIntroCompleted = false;
	this->_isLevelReadyToPlay = false;
	this->_interactionDuration = 0.000000;
}
