#include "ConditionalMaterialReplacer.h"

FConditionalMaterialReplacer::FConditionalMaterialReplacer()
{
	this->ItemTag = NAME_None;
	this->ConditionalMaterials = TMap<FName, FMaterialReplacerArray>();
}
