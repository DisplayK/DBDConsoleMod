#include "K25ChainAnchorAnimationData.h"

FK25ChainAnchorAnimationData::FK25ChainAnchorAnimationData()
{
	this->ChainPullAngle = 0.0f;
	this->ChainWeight = 0.0f;
	this->ChainHeight = 0.0f;
	this->HasChainAttached = false;
	this->IsChainBeingRemoved = false;
	this->AttachedChain = NULL;
}
