#include "TOPNetwork.h"

UTOPNetwork::UTOPNetwork()
{
	this->NodeId = -1;
	this->NodeName = TEXT("");
	this->NodePath = TEXT("");
	this->AllTOPNodes = TArray<UTOPNode*>();
	this->SelectedTOPIndex = -1;
	this->ParentName = TEXT("");
	this->bShowResults = false;
	this->bAutoLoadResults = false;
}
