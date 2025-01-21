#include "LobbyDialogueSubsystem.h"
#include "EPlayerRole.h"
#include "EAudioCustomizationCategory.h"

class ADBDMenuPlayer;

void ULobbyDialogueSubsystem::NotifyDialogueInterrupted()
{

}

void ULobbyDialogueSubsystem::NotifyCharacterPlayedDialogueForThisLobby(const FString& characterName, int32 dialogueId)
{

}

bool ULobbyDialogueSubsystem::IsLobbyFullForRole(EPlayerRole role)
{
	return false;
}

bool ULobbyDialogueSubsystem::HasCharacterPlayedDialogueForThisLobby(const FString& characterName, int32 dialogueId)
{
	return false;
}

TArray<ADBDMenuPlayer*> ULobbyDialogueSubsystem::GetGuestLobbyMembers()
{
	return TArray<ADBDMenuPlayer*>();
}

void ULobbyDialogueSubsystem::CountGuestLobbyMembersWithAudioSwitch(EAudioCustomizationCategory switchCategory, const TArray<FString>& audioSwitches, int32& numMatching, int32& numNotMatching)
{

}

ULobbyDialogueSubsystem::ULobbyDialogueSubsystem()
{

}
