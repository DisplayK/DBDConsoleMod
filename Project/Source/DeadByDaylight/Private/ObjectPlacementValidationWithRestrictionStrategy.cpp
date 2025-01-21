#include "ObjectPlacementValidationWithRestrictionStrategy.h"

void UObjectPlacementValidationWithRestrictionStrategy::OnLevelReadyToPlay()
{

}

UObjectPlacementValidationWithRestrictionStrategy::UObjectPlacementValidationWithRestrictionStrategy()
{
	this->_restrictedAreas = TArray<URestrictedPlacementAreaStrategy*>();
}
