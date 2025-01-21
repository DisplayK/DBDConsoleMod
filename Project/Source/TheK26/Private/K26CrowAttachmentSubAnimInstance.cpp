#include "K26CrowAttachmentSubAnimInstance.h"

UK26CrowAttachmentSubAnimInstance::UK26CrowAttachmentSubAnimInstance()
{
	this->_hasCrowAttached = false;
	this->_isRemovingCrow = false;
	this->_isIdle = false;
	this->_isCrawling = false;
	this->_isDead = false;
	this->_isHooked = false;
	this->_isInsideCloset = false;
	this->_isInteracting = false;
	this->_isHoldingSmallItem = false;
	this->_isUsingAimItem = false;
	this->_isCrouched = false;
}
