#include "TaggedAnimSequence.h"

FTaggedAnimSequence::FTaggedAnimSequence()
{
	this->Sequence = NULL;
	this->Tags = FGameplayTagContainer{};
}
