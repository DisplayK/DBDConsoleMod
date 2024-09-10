#include "AimableComponent.h"

class UAimPointProcessor;
class AActor;

void UAimableComponent::SetProcessors(TArray<UAimPointProcessor*> processors)
{

}

void UAimableComponent::SetOcclusionIgnoredActors(const TArray<AActor*>& ignoredActors)
{

}

void UAimableComponent::SetMaxAimDistance(float maxAimDistance)
{

}

UAimableComponent::UAimableComponent()
{
	this->_occlusionIgnoredActors = TArray<AActor*>();
	this->_maxAimDistance = 1000.000000;
	this->_aimDirectionProvider = NULL;
	this->_useOcclusion = false;
	this->_aimPointLerpFactor = 15.000000;
	this->_preOcclusionAimPointProcessors = TArray<UAimPointProcessor*>();
}
