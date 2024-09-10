#pragma once

#include "CoreMinimal.h"
#include "PlayerLoadoutData.h"
#include "BloodWebPersistentData.h"
#include "UObject/NoExportTypes.h"
#include "EquippedPlayerCustomization.h"
#include "CharacterSavedInventoryData.h"
#include "SavedCharacterLevelData.h"
#include "SavedStatsData.h"
#include "CharacterSavedProfileData.generated.h"

USTRUCT()
struct FCharacterSavedProfileData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 BloodWebLevel;

	UPROPERTY()
	int32 TimesConfronted;

	UPROPERTY()
	TArray<FDateTime> PrestigeEarnedDates;

	UPROPERTY()
	FBloodWebPersistentData BloodWebData;

	UPROPERTY()
	FPlayerLoadoutData CharacterLoadoutData;

	UPROPERTY()
	FEquippedPlayerCustomization CurrentCustomization;

	UPROPERTY()
	TArray<FName> UniquePerksAdded;

	UPROPERTY()
	bool CharacterBloodwebMigrationIsDone;

protected:
	UPROPERTY()
	TArray<FCharacterSavedInventoryData> InventoryData;

	UPROPERTY()
	TArray<FSavedCharacterLevelData> CharacterLevelData;

	UPROPERTY()
	TArray<FSavedStatsData> StatProgression;

private:
	UPROPERTY()
	int32 PrestigeLevel;

	UPROPERTY()
	int32 LegacyPrestigeLevel;

	UPROPERTY()
	int32 CharacterExperience;

public:
	DEADBYDAYLIGHT_API FCharacterSavedProfileData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterSavedProfileData) { return 0; }
