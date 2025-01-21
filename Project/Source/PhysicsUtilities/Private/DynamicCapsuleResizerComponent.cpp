#include "DynamicCapsuleResizerComponent.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;

void UDynamicCapsuleResizerComponent::SetShrinkingEnabled(bool enabled)
{

}

void UDynamicCapsuleResizerComponent::OnRep_IsShrinkingAlwaysEnabled()
{

}

void UDynamicCapsuleResizerComponent::OnHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit)
{

}

void UDynamicCapsuleResizerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDynamicCapsuleResizerComponent, _isShrinkingAlwaysEnabled);
}

UDynamicCapsuleResizerComponent::UDynamicCapsuleResizerComponent()
{
	this->_capsule = NULL;
	this->_shrinkPercent = 0.800000;
	this->_shrinkDuration = 5.000000;
	this->_expandDuration = 1.000000;
	this->_stayShrunkenDuration = 0.500000;
	this->_expandOverlapTestMinDeltaTime = 0.100000;
	this->_isShrinkingEnabled = false;
	this->_isShrinkingAlwaysEnabled = false;
}
