#include "OfflineLobbyLevel.h"

class AActor;

void AOfflineLobbyLevel::CheckDestroyingPawns(AActor* DestroyedActor)
{

}

AOfflineLobbyLevel::AOfflineLobbyLevel()
{
	this->_roleSelectionCamperSpawns = TArray<TWeakObjectPtr<APlayerStart>>();
	this->_roleSelectionSlasherSpawns = TArray<TWeakObjectPtr<APlayerStart>>();
	this->_offlineLobbyLocalSlasherSpawn = NULL;
	this->_offlineLobbyLocalCamperSpawn = NULL;
	this->_partyLobbySlasherPOVTrackerOffsets = TArray<FVector>();
	this->_partyLobbyEmptySlotSilhouette = NULL;
	this->_partyLobbySlasherDisplayStands = TArray<TWeakObjectPtr<ADisplayStand>>();
	this->_partyLobbyCamperDisplayStands = TArray<TWeakObjectPtr<ADisplayStand>>();
	this->_meatHookForCustomization = NULL;
	this->_meatHookSpawn = NULL;
	this->_charmForCustomizationZoom = NULL;
	this->_camperCharmSpawn = NULL;
	this->_slasherCharmSpawn = NULL;
	this->_partyLobbyEmptySlotPawns = TMap<TWeakObjectPtr<ADisplayStand>, TWeakObjectPtr<ADBDMenuSilhouette>>();
	this->_destroyingPawns = TArray<AActor*>();
}
