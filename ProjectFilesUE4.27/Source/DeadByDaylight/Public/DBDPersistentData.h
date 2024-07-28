#pragma once

#include "CoreMinimal.h"
#include "GamePersistentData.h"
#include "UObject/NoExportTypes.h"
#include "PlayerPersistentData.h"
#include "CloudInventoryItem.h"
#include "DBDPersistentData.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDPersistentData : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	FGamePersistentData _gamePersistentData;

	UPROPERTY(Transient)
	TArray<FString> _keepDataIDs;

	UPROPERTY(Transient)
	TMap<FString, FPlayerPersistentData> _playerIdToPersistentDataMap;

	UPROPERTY(Transient)
	FPlayerPersistentData _localPlayerPersistentData;

	UPROPERTY(Transient)
	TArray<FCloudInventoryItem> _cloudInventory;

public:
	UDBDPersistentData();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPersistentData) { return 0; }
