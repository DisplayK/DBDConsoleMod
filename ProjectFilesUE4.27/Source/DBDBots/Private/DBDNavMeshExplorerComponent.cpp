#include "DBDNavMeshExplorerComponent.h"

UDBDNavMeshExplorerComponent::UDBDNavMeshExplorerComponent()
{
	this->ExploreAtAgentMoveDistance = 100.000000;
	this->ExploreAtInterval = 2.000000;
	this->FullyAutoExploredAtGameTime = 300;
	this->_pathFollowingComponent = NULL;
}
