#include "StoryLevel.h"

FStoryLevel::FStoryLevel()
{
	this->Start = TArray<FString>();
	this->End = TArray<FString>();
	this->StartDate = TEXT("");
	this->Nodes = TMap<FString, FArchivesNodeDefinition>();
	this->EndNodeRewards = TArray<FRewardResponseItem>();
	this->EndNodeRewards_IsSet = false;
	this->LevelRewards = TArray<FRewardResponseItem>();
	this->LevelRewards_IsSet = false;
	this->TaskRewards = TArray<FRewardResponseItem>();
	this->TaskRewards_IsSet = false;
	this->ChallengeRewards = TArray<FRewardResponseItem>();
	this->ChallengeRewards_IsSet = false;
}
