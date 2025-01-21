#include "DetectivesHunch.h"
#include "Net/UnrealNetwork.h"

void UDetectivesHunch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDetectivesHunch, _revealedActors);
}

UDetectivesHunch::UDetectivesHunch()
{
	this->_interactableClasses = TSet<TSoftClassPtr<AInteractable>>();
	this->_revealRanges = 0.000000;
	this->_revealDuration = 10.000000;
	this->_actorToTimerMap = TMap<AActor*, FTimerHandle>();
}
