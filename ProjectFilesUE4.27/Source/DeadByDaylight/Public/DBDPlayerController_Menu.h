#pragma once

#include "CoreMinimal.h"
#include "CharacterCustomization.h"
#include "DBDPlayerControllerBase.h"
#include "GamePresetData.h"
#include "PlayerLoadoutData.h"
#include "PlayerDataSync.h"
#include "DBDPlayerController_Menu.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ADBDPlayerController_Menu : public ADBDPlayerControllerBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void TogglePlayerReadyState();

	UFUNCTION()
	void SetPlayerReady(bool isReady);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetReadyToTravel();

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetPlayerReady(bool isReady);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetPlayerLoadout(FPlayerLoadoutData desiredLoadout);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetEquipedPerks(const TArray<FName>& perkIds, const TArray<int32>& perkLevels, bool callOnRep);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetCustomizationMeshes(const FCharacterCustomization& customization);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetCustomizationCharm(FName charmId, int8 slotIndex);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetCharacterLevel(int32 characterLevel, int32 prestigeLevel, bool callOnRep);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetCharacterData(int32 characterIndex, const FPlayerDataSync& playerDataSync);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_GamePresetDataFromClient(const FGamePresetData& gameState);

	UFUNCTION()
	void Authority_TogglePlayerReadyState();

	UFUNCTION()
	void Authority_SetPlayerReady(bool isReady);

public:
	ADBDPlayerController_Menu();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerController_Menu) { return 0; }
