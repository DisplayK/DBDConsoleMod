#pragma once

#include "CoreMinimal.h"
#include "CharacterCustomizationPreset.h"
#include "CharacterCustomizationPresetsList.generated.h"

USTRUCT()
struct FCharacterCustomizationPresetsList
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	int32 CharacterId;

	UPROPERTY(SaveGame)
	int32 ActivePreset;

	UPROPERTY(SaveGame)
	TArray<FCharacterCustomizationPreset> Presets;

public:
	DEADBYDAYLIGHT_API FCharacterCustomizationPresetsList();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCustomizationPresetsList) { return 0; }
