#include "DecalCollection.h"

UDecalCollection::UDecalCollection()
{
	this->_decalComponentsArray = TArray<UDBDDecalComponent*>();
	this->_activeDecalComponents = TSet<UDBDDecalComponent*>();
	this->_inactiveDecalComponents = TSet<UDBDDecalComponent*>();
	this->_DeltaZPool = TArray<bool>();
	this->_deltaZMultipliers = TMap<UStaticMeshComponent*, int32>();
	this->_decalProperties = NULL;
}
