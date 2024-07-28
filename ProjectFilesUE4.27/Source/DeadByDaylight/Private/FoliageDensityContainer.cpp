#include "FoliageDensityContainer.h"

AFoliageDensityContainer::AFoliageDensityContainer()
{
	this->_foliageActors = TMap<FName, AFoliageActor*>();
	this->_foliageHISMs = TMap<FName, UFoliageDensityHISM*>();
	this->_mapFoliageDensityTunables = NULL;
}
