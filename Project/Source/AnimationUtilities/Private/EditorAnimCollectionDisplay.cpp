#include "EditorAnimCollectionDisplay.h"

FEditorAnimCollectionDisplay::FEditorAnimCollectionDisplay()
{
	this->_taggedAnimSequencesMetadata = TMap<FGameplayTag, FEditorCollectionMetadata>();
	this->_taggedAnimBlendspacesMetadata = TMap<FGameplayTag, FEditorCollectionMetadata>();
	this->_taggedAnimSelectorsMetadata = TMap<FGameplayTag, FEditorCollectionMetadata>();
}
