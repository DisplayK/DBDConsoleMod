#pragma once

#include "CoreMinimal.h"
#include "AssignedPerkPropertiesV7.h"
#include "SavedCharacterLevelDataV7.generated.h"

USTRUCT()
struct FSavedCharacterLevelDataV7
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	int32 Level;

	UPROPERTY(SaveGame)
	bool HasPerksBeenSelected;

	UPROPERTY(SaveGame)
	bool HasPerkSelectionBeenGenerated;

	UPROPERTY(SaveGame)
	TArray<FAssignedPerkPropertiesV7> PerkSelection;

public:
	DEADBYDAYLIGHT_API FSavedCharacterLevelDataV7();
};

FORCEINLINE uint32 GetTypeHash(const FSavedCharacterLevelDataV7) { return 0; }
