#include "DBDAnimBudgetAllocatorComponentData.h"

FDBDAnimBudgetAllocatorComponentData::FDBDAnimBudgetAllocatorComponentData()
{
	this->Component = NULL;
	this->ChildrenComponents = TArray<USkeletalMeshComponentBudgeted*>();
}
