#include "HoudiniParameterFolderList.h"

UHoudiniParameterFolderList::UHoudiniParameterFolderList()
{
	this->bIsTabMenu = false;
	this->bIsTabsShown = false;
	this->TabFolders = TArray<UHoudiniParameterFolder*>();
}
