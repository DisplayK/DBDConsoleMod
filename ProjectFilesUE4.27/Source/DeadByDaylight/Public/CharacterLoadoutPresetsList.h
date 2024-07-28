#pragma once

#include "CoreMinimal.h"
#include "CharacterLoadoutPreset.h"
#include "CharacterLoadoutPresetsList.generated.h"

USTRUCT()
struct FCharacterLoadoutPresetsList
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	int32 CharacterId;

	UPROPERTY(SaveGame)
	int32 ActivePreset;

	UPROPERTY(SaveGame)
	TArray<FCharacterLoadoutPreset> Presets;

public:
	DEADBYDAYLIGHT_API FCharacterLoadoutPresetsList();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterLoadoutPresetsList) { return 0; }
