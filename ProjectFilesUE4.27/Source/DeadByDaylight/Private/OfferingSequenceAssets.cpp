#include "OfferingSequenceAssets.h"

AOfferingSequenceAssets::AOfferingSequenceAssets()
{
	this->SpaceBetweenCards = 0.000000;
	this->DefaultCardClass = NULL;
	this->DefaultCardAnimation = NULL;
	this->OfferingRevealDelays = TArray<FOfferingRevealDelays>();
	this->CardsParent = NULL;
}
