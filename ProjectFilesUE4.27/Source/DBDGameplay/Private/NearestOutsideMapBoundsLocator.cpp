#include "NearestOutsideMapBoundsLocator.h"
#include "EEndGameReason.h"
#include "AkComponent.h"

void UNearestOutsideMapBoundsLocator::OnGameEnd(EEndGameReason endGameReason)
{

}

void UNearestOutsideMapBoundsLocator::OnGameBegin()
{

}

void UNearestOutsideMapBoundsLocator::Client_InitializeAkLimitPointEvent()
{

}

UNearestOutsideMapBoundsLocator::UNearestOutsideMapBoundsLocator()
{
	this->_akComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Out Of Bounds Audio Component"));
	this->_maxDistanceFromBorderAllowed = 2400.000000;
	this->_heightOfOOBPosition = 200.000000;
}
