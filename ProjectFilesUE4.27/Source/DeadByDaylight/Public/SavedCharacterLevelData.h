#pragma once

#include "CoreMinimal.h"
#include "AssignedPerkProperties.h"
#include "SavedCharacterLevelData.generated.h"

USTRUCT()
struct FSavedCharacterLevelData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 Level;

	UPROPERTY()
	bool HasPerksBeenSelected;

	UPROPERTY()
	bool HasPerkSelectionBeenGenerated;

	UPROPERTY()
	TArray<FAssignedPerkProperties> PerkSelection;

public:
	DEADBYDAYLIGHT_API FSavedCharacterLevelData();
};

FORCEINLINE uint32 GetTypeHash(const FSavedCharacterLevelData) { return 0; }
