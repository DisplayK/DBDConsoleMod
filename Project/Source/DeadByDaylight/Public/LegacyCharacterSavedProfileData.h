#pragma once

#include "CoreMinimal.h"
#include "LegacySavedBloodWebPersistentData.h"
#include "UObject/NoExportTypes.h"
#include "LegacyCharacterSavedInventoryData.h"
#include "LegacySavedPlayerLoadoutData.h"
#include "LegacyCharacterSavedProfileData.generated.h"

USTRUCT()
struct FLegacyCharacterSavedProfileData
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	int32 VersionNumber;

	UPROPERTY(SaveGame)
	int32 BloodPoints;

	UPROPERTY(SaveGame)
	int32 BloodWebLevel;

	UPROPERTY(SaveGame)
	int32 PrestigeLevel;

	UPROPERTY(SaveGame)
	int32 TimesConfronted;

	UPROPERTY(SaveGame)
	TArray<FDateTime> PrestigeDates;

	UPROPERTY(SaveGame)
	FLegacySavedBloodWebPersistentData BloodWebData;

	UPROPERTY(SaveGame)
	FLegacySavedPlayerLoadoutData CharacterLoadoutData;

	UPROPERTY(SaveGame)
	TArray<FName> Inventory;

	UPROPERTY(SaveGame)
	TArray<FLegacyCharacterSavedInventoryData> InventoryData;

	UPROPERTY(SaveGame)
	TArray<FName> CurrentCustomization;

public:
	DEADBYDAYLIGHT_API FLegacyCharacterSavedProfileData();
};

FORCEINLINE uint32 GetTypeHash(const FLegacyCharacterSavedProfileData) { return 0; }
