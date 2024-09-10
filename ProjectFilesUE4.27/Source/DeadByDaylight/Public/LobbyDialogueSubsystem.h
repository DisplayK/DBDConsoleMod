#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EPlayerRole.h"
#include "EAudioCustomizationCategory.h"
#include "LobbyDialogueSubsystem.generated.h"

class ADBDMenuPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API ULobbyDialogueSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void NotifyDialogueInterrupted();

	UFUNCTION(BlueprintCallable)
	static void NotifyCharacterPlayedDialogueForThisLobby(const FString& characterName, int32 dialogueId);

	UFUNCTION(BlueprintPure)
	static bool IsLobbyFullForRole(EPlayerRole role);

	UFUNCTION(BlueprintPure)
	static bool HasCharacterPlayedDialogueForThisLobby(const FString& characterName, int32 dialogueId);

	UFUNCTION(BlueprintPure)
	static TArray<ADBDMenuPlayer*> GetGuestLobbyMembers();

	UFUNCTION(BlueprintPure)
	static void CountGuestLobbyMembersWithAudioSwitch(EAudioCustomizationCategory switchCategory, const TArray<FString>& audioSwitches, int32& numMatching, int32& numNotMatching);

public:
	ULobbyDialogueSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const ULobbyDialogueSubsystem) { return 0; }
