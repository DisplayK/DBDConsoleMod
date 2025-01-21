#include "AnimSequenceSelector.h"

FAnimSequenceSelector::FAnimSequenceSelector()
{
	this->_selected = NULL;
	this->_taggedSequences = TArray<FTaggedAnimSequence>();
}
