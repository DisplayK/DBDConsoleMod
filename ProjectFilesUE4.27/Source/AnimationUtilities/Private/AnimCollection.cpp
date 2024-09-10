#include "AnimCollection.h"

UAnimCollection::UAnimCollection()
{
	this->_taggedAnimSequences = TMap<FGameplayTag, UAnimSequence*>();
	this->_taggedAnimBlendspaces = TMap<FGameplayTag, UBlendSpaceBase*>();
	this->_taggedAnimSelectors = TMap<FGameplayTag, FAnimSequenceSelector>();
	this->_parent = NULL;
	this->_children = TArray<UAnimCollection*>();
}
