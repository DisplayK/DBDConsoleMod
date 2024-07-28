#include "K25SurvivorChainAttachmentData.h"

FK25SurvivorChainAttachmentData::FK25SurvivorChainAttachmentData()
{
	this->AnchorName = NAME_None;
	this->Direction = EK25ChainAnchorPointDirection::Front;
	this->RelativeLocation = FVector{};
	this->IsFlexibleLimb = false;
	this->LimbType = EK25ChainAttachmentLimbType::Hand;
	this->_attachedSurvivor = NULL;
}
