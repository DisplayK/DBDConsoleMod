#pragma once

#include "CoreMinimal.h"
#include "AssignedPerkProperties.h"
#include "CharacterLevelData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterLevelData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	int32 Level;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 ExperienceToNextLevel;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsComplete;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool HasPerksBeenSelected;

	UPROPERTY(Transient)
	TArray<FAssignedPerkProperties> PerkSelection;

public:
	DEADBYDAYLIGHT_API FCharacterLevelData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterLevelData) { return 0; }
