#include "TotemOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"

FLinearColor UTotemOutlineUpdateStrategy::GetRevealColorToSurvivor() const
{
	return FLinearColor{};
}

UTotemOutlineUpdateStrategy::UTotemOutlineUpdateStrategy()
{
	this->_revealedColorToKiller = NULL;
}
