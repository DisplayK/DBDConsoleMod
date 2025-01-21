#include "DBDBlackboardComponent.h"

UDBDBlackboardComponent::UDBDBlackboardComponent()
{
	this->_mindFocusEntries = TMap<UObject*, FMindFocusObjectEntry>();
	this->_pinLocations = TMap<FGameplayTag, FVector>();
	this->_pinObjects = TMap<FGameplayTag, UObject*>();
	this->_lostMindFocusEntries = TMap<UObject*, float>();
	this->_objectWishListMap = TMap<FGameplayTag, FWeightedWishedObjectMapContainer>();
	this->_discoveredObjects = TSet<UObject*>();
	this->_intentionValidators = TSet<UObject*>();
}
