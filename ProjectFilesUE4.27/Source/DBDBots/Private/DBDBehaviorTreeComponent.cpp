#include "DBDBehaviorTreeComponent.h"

UDBDBehaviorTreeComponent::UDBDBehaviorTreeComponent()
{
	this->_lastRelevantNodeMemories = TMap<UClass*, FRelevantNodeMemory>();
	this->_createdObjects = TArray<UObject*>();
}
