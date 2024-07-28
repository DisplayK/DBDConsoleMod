#include "PatrolTrailComponent.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"

class ATrailNode;

bool UPatrolTrailComponent::IsTrailCompleted() const
{
	return false;
}

ATrailNode* UPatrolTrailComponent::GetPreviousNode(ATrailNode* currentNode) const
{
	return NULL;
}

ATrailNode* UPatrolTrailComponent::GetNextNode(ATrailNode* currentNode) const
{
	return NULL;
}

FVector UPatrolTrailComponent::GetLastPosition() const
{
	return FVector{};
}

ATrailNode* UPatrolTrailComponent::GetLastNode() const
{
	return NULL;
}

ATrailNode* UPatrolTrailComponent::GetFirstNode() const
{
	return NULL;
}

float UPatrolTrailComponent::GetCurrentTrailLength() const
{
	return 0.0f;
}

bool UPatrolTrailComponent::DoesTrailExist() const
{
	return false;
}

void UPatrolTrailComponent::Authority_StopRecordingTrail()
{

}

void UPatrolTrailComponent::Authority_StartRecordingTrail()
{

}

void UPatrolTrailComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPatrolTrailComponent, _trail);
}

UPatrolTrailComponent::UPatrolTrailComponent()
{
	this->clearPathNodeDelay = 2.000000;
}
