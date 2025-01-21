#include "MontagePlaybackDefinition.h"

FMontagePlaybackDefinition::FMontagePlaybackDefinition()
{
	this->Descriptor = FAnimationMontageDescriptor{};
	this->PlayRate = 0.0f;
	this->Follower = false;
}
