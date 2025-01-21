#include "ArchivesNodeDefinition.h"

FArchivesNodeDefinition::FArchivesNodeDefinition()
{
	this->ClientInfoId = TEXT("");
	this->Coordinates = FArchivesNodeCoordinates{};
	this->Neighbors = TArray<FString>();
	this->NodeType = TEXT("");
	this->Objectives = TMap<FString, FArchivesObjective>();
	this->Objectives_IsSet = false;
	this->Journal = TArray<FString>();
	this->Journal_IsSet = false;
	this->Reward = TArray<FRewardResponseItem>();
	this->Reward_IsSet = false;
}
