#include "K29InfectionRemovalCollectable.h"
#include "K29InfectionRemovalItemOutlineUpdateStrategy.h"

AK29InfectionRemovalCollectable::AK29InfectionRemovalCollectable()
{
	this->_outlineUpdateStrategy = CreateDefaultSubobject<UK29InfectionRemovalItemOutlineUpdateStrategy>(TEXT("OutlineUpdateStrategy"));
}
