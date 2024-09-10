#include "TOPNode.h"

UTOPNode::UTOPNode()
{
	this->NodeId = -1;
	this->NodeName = TEXT("");
	this->NodePath = TEXT("");
	this->ParentName = TEXT("");
	this->WorkResultParent = NULL;
	this->WorkResult = TArray<FTOPWorkResult>();
	this->bHidden = false;
	this->bAutoLoad = false;
	this->NodeState = EPDGNodeState::None;
	this->bCachedHaveNotLoadedWorkResults = false;
	this->bCachedHaveLoadedWorkResults = false;
	this->bHasChildNodes = false;
	this->ClearedLandscapeLayers = TSet<FString>();
	this->bShow = false;
	this->BakedWorkResultObjectOutputs = TMap<FString, FHoudiniPDGWorkResultObjectBakedOutput>();
	this->bHasReceivedCookCompleteEvent = false;
}
