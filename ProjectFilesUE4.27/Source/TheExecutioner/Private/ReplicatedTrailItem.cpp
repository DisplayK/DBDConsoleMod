#include "ReplicatedTrailItem.h"

FReplicatedTrailItem::FReplicatedTrailItem()
{
	this->TrailPoint = NULL;
	this->OrderInTrail = 0;
	this->PointRelativeLocation = FVector_NetQuantize10{};
	this->PointRotation = FRotator{};
}
