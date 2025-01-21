#include "TwinDestructionComponent.h"
#include "AnimationMontageDescriptor.h"
#include "Net/UnrealNetwork.h"

void UTwinDestructionComponent::OnDyingMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted)
{

}

void UTwinDestructionComponent::Authority_OnTwinQuickDestroyOver()
{

}

void UTwinDestructionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTwinDestructionComponent, _dyingTransform);
}

UTwinDestructionComponent::UTwinDestructionComponent()
{
	this->_huskClass = NULL;
	this->_dyingFromSurvivorTranslation = 100.000000;
}
