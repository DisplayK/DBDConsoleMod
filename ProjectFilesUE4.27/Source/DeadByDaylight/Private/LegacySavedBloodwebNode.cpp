#include "LegacySavedBloodwebNode.h"

FLegacySavedBloodwebNode::FLegacySavedBloodwebNode()
{
	this->Properties = FLegacySavedBloodwebNodeProperties{};
	this->Gates = TArray<FLegacySavedBloodwebNodeGate>();
	this->State = EBloodwebNodeState::Inactive;
	this->NodeID = TEXT("");
	this->ContentId = NAME_None;
	this->BloodwebChest = FLegacySavedBloodwebChest{};
}
