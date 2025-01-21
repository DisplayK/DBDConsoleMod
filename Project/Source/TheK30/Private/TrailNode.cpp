#include "TrailNode.h"
#include "Net/UnrealNetwork.h"

void ATrailNode::OnRep_PreviousNodePosition()
{

}

bool ATrailNode::IsOwnerLocallyObserved() const
{
	return false;
}

bool ATrailNode::IsFirstNode() const
{
	return false;
}

void ATrailNode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ATrailNode, PreviousNodePosition);
}

ATrailNode::ATrailNode()
{

}
