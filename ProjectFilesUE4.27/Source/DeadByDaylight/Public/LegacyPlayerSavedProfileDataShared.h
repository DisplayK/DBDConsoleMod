#pragma once

#include "CoreMinimal.h"
#include "LegacyPlayerSavedProfileDataShared.generated.h"

USTRUCT()
struct FLegacyPlayerSavedProfileDataShared
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FString PlayerName;

	UPROPERTY(SaveGame)
	int32 SelectedCamperIndex;

	UPROPERTY(SaveGame)
	int32 SelectedSlasherIndex;

	UPROPERTY(SaveGame)
	TArray<FName> SelectedCharacterCustomization;

	UPROPERTY(SaveGame)
	int32 SlasherSkulls;

	UPROPERTY(SaveGame)
	int32 CamperSkulls;

	UPROPERTY(SaveGame)
	int32 CamperStreak;

public:
	DEADBYDAYLIGHT_API FLegacyPlayerSavedProfileDataShared();
};

FORCEINLINE uint32 GetTypeHash(const FLegacyPlayerSavedProfileDataShared) { return 0; }
