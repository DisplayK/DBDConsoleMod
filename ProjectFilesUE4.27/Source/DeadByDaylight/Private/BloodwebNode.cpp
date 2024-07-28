#include "BloodwebNode.h"

FBloodwebNode::FBloodwebNode()
{
	this->Properties = FBloodwebNodeProperties{};
	this->Gates = TArray<FBloodwebNodeGate>();
	this->State = EBloodwebNodeState::Inactive;
	this->NodeID = TEXT("");
	this->ContentId = NAME_None;
	this->BloodwebChest = FBloodwebChest{};
}
