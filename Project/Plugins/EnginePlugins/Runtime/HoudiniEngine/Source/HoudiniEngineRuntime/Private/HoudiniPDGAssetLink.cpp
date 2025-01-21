#include "HoudiniPDGAssetLink.h"

UHoudiniPDGAssetLink::UHoudiniPDGAssetLink()
{
	this->AssetName = TEXT("");
	this->AssetNodePath = TEXT("");
	this->AssetID = -1;
	this->AllTOPNetworks = TArray<UTOPNetwork*>();
	this->SelectedTOPNetworkIndex = -1;
	this->LinkState = EPDGLinkState::Inactive;
	this->bAutoCook = false;
	this->bUseTOPNodeFilter = true;
	this->bUseTOPOutputFilter = true;
	this->TOPNodeFilter = TEXT("HE_");
	this->TOPOutputFilter = TEXT("HE_OUT_");
	this->NumWorkitems = 0;
	this->OutputCachePath = TEXT("");
	this->bNeedsUIRefresh = false;
	this->OutputParentActor = NULL;
}
