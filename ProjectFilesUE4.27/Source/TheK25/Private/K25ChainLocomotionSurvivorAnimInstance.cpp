#include "K25ChainLocomotionSurvivorAnimInstance.h"
#include "EK25ChainDetachmentReason.h"

class AK25Chain;
class AK25SurvivorChainAttachmentAnchor;

void UK25ChainLocomotionSurvivorAnimInstance::OnChainDetached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor, EK25ChainDetachmentReason detachmentReason)
{

}

void UK25ChainLocomotionSurvivorAnimInstance::OnChainAttached(AK25Chain* chain, AK25SurvivorChainAttachmentAnchor* chainAttachmentAnchor)
{

}

UK25ChainLocomotionSurvivorAnimInstance::UK25ChainLocomotionSurvivorAnimInstance()
{
	this->_hasChainsAttached = false;
	this->_isPerformingBreakChainInteraction = false;
	this->_forwardDirectionDotProductResult = 0.000000;
	this->_lateralDirectionDotProductResult = 0.000000;
	this->_currentChainBeingDetached = NULL;
	this->_chainDirection = EK25ChainAnchorPointDirection::Front;
	this->_hasBrokenFreeFromChain = false;
	this->_hasBrokenFreeTime = 0.500000;
	this->_hasBeenHitByChain = false;
	this->_isIdle = false;
	this->_IsCrouched = false;
	this->_isMale = false;
	this->_isBeingCarried = false;
	this->_hasBeenHitByChainTime = 0.350000;
	this->_hitChainName = NAME_None;
	this->_detachedChainAnchorName = NAME_None;
}
