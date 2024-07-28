#include "BloodTrailComponent.h"

void UBloodTrailComponent::ConditionalStartBleeding()
{

}

UBloodTrailComponent::UBloodTrailComponent()
{
	this->_bloodTrailSettings = NULL;
	this->_bloodDecals = TMap<UDBDDecalComponent*, FBloodDecal>();
	this->_bloodDecalEffect = NULL;
	this->_decalSpawner = NULL;
}
