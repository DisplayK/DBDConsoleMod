#pragma once

#include "CoreMinimal.h"
#include "DBDBaseGameMode.h"
#include "DBDGame_Lobby.generated.h"

class UIdentityValidation;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDGame_Lobby : public ADBDBaseGameMode
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere)
	UIdentityValidation* _identityValidation;

public:
	UFUNCTION(Exec, BlueprintCallable)
	void DBD_RemoveBotByIndex(int32 botIndex);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_FillLobbyWithBotsByName(const FString& selectedKiller, int32 rank);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_FillLobby();

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddBotToLobbyNoLoadoutByName(const FString& selectedCharacter);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddBotToLobbyNoLoadout(int32 selectedCharacter);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddBotToLobbyByName(const FString& selectedCharacter, const FString& item, const FString& addon1, const FString& addon2, const FString& offering, const FString& perk1, const FString& perk2, const FString& perk3, const FString& perk4, int32 rank);

	UFUNCTION(Exec, BlueprintCallable)
	void DBD_AddBotToLobby(int32 selectedCharacter, const FString& item, const FString& addon1, const FString& addon2, const FString& offering, const FString& perk1, const FString& perk2, const FString& perk3, const FString& perk4, int32 rank);

public:
	ADBDGame_Lobby();
};

FORCEINLINE uint32 GetTypeHash(const ADBDGame_Lobby) { return 0; }
