#pragma once

#include "CoreMinimal.h"
#include "CharacterCustomization.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCustomization
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName Head;

	UPROPERTY()
	FName TorsoOrBody;

	UPROPERTY()
	FName LegsOrWeapon;

public:
	CUSTOMIZATION_API FCharacterCustomization();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCustomization) { return 0; }
