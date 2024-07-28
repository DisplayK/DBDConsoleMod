#include "K25Chain.h"
#include "UObject/NoExportTypes.h"

class USplineComponent;
class UInstancedStaticMeshComponent;
class AK25SurvivorChainAttachmentAnchor;

void AK25Chain::SetSplineComponent(USplineComponent* component)
{

}

void AK25Chain::SetInstancedMeshComponent(UInstancedStaticMeshComponent* instancedMesh)
{

}

bool AK25Chain::IsAttachedToControlledProjectile() const
{
	return false;
}

AK25SurvivorChainAttachmentAnchor* AK25Chain::GetSurvivorChainAttachmentAnchor() const
{
	return NULL;
}

FVector AK25Chain::GetChainStartLocation() const
{
	return FVector{};
}

FVector AK25Chain::GetChainEndLocation() const
{
	return FVector{};
}

AK25Chain::AK25Chain()
{
	this->_attachedToProjectileInfluenceCurve = NULL;
	this->_reelbackInfluenceCurve = NULL;
	this->_offsetMultiplierInfluenceCurve = NULL;
	this->_chainOffsetMinValue = 10.000000;
	this->_chainOffsetMaxValue = 10.000000;
	this->_reelbackChainOffsetMinValue = 10.000000;
	this->_reelbackChainOffsetMaxValue = 10.000000;
	this->_chainInstanceSpacing = 10.000000;
	this->_quickChainOffsetTimerLength = 0.500000;
	this->_reachingSurvivorAnchorTime = 0.750000;
	this->_chainOffsetTimerLength = 5.000000;
	this->_currentChainPoints = TArray<FVector>();
	this->_isAcquiredFromPool = false;
	this->_sphereTraceRadius = 4.000000;
	this->_projectileAttachedTo = NULL;
	this->_survivorAnchorAttachedTo = NULL;
	this->_targetAnchorToReach = NULL;
	this->_chainSplineComponent = NULL;
	this->_chainInstancedMesh = NULL;
	this->_currentInfluenceCurve = NULL;
	this->_chainState = EK25ChainState::InPool;
	this->_forcedPositions = TArray<FVector>();
	this->_chainCreationStrategy = EK25ChainCreationStrategy::Spline;
}
