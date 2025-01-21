#include "OutOfSightMeshRotator.h"

class UMeshComponent;

void UOutOfSightMeshRotator::SetMeshesToRotate(TArray<UMeshComponent*> meshesToRotate)
{

}

UOutOfSightMeshRotator::UOutOfSightMeshRotator()
{
	this->_maxDistance = 3200.000000;
	this->_dotProductThreshold = -0.100000;
	this->_locallyObservedPlayer = NULL;
	this->_meshesToRotate = TArray<UMeshComponent*>();
	this->_rotationOffset = 0.000000;
}
