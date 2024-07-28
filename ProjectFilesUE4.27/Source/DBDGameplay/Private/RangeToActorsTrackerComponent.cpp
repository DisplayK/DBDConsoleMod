#include "RangeToActorsTrackerComponent.h"

void URangeToActorsTrackerComponent::OnLevelReadyToPlay()
{

}

URangeToActorsTrackerComponent::URangeToActorsTrackerComponent()
{
	this->_rangeTrackers = TArray<URangeToActorsTrackerStrategy*>();
}
