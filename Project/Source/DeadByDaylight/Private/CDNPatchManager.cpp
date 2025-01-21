#include "CDNPatchManager.h"

class UAtlantaPendingContent;

void UCDNPatchManager::OnRequestSucceeded(UAtlantaPendingContent* pendingContent)
{

}

void UCDNPatchManager::OnRequestFailed(FText errorText, int32 errorCode)
{

}

void UCDNPatchManager::OnInstallSucceeded()
{

}

void UCDNPatchManager::OnInstallFailed(FText errorText, int32 errorCode)
{

}

UCDNPatchManager::UCDNPatchManager()
{
	this->InstallDirectory = TEXT("InstalledContent");
	this->PakOrder = 1;
	this->PakMountPoint = TEXT("");
	this->_gameInstance = NULL;
	this->_currentContentToInstall = NULL;
	this->_remainingManifestsToInstall = TArray<FString>();
	this->_contentToInstall = TMap<FString, UAtlantaPendingContent*>();
	this->_MobilePendingContent = NULL;
}
