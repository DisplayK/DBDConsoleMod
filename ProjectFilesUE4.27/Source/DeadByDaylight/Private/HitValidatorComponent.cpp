#include "HitValidatorComponent.h"
#include "HitValidationReport.h"

void UHitValidatorComponent::Multicast_DrawDebugHit_Implementation(FHitValidationReport report)
{

}

UHitValidatorComponent::UHitValidatorComponent()
{
	this->_maximumSquareDistance = 640000.000000;
	this->_hitValidationConfigComponent = NULL;
}
