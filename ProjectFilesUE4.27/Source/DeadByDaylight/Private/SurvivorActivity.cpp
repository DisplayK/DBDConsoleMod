#include "SurvivorActivity.h"

FSurvivorActivity::FSurvivorActivity()
{
	this->ShouldDisplayProgress = false;
	this->TagsAssociatedWithAction = TArray<FGameplayTag>();
	this->ActivityType = FGameplayTag{};
}
