#pragma once

#include "CoreMinimal.h"
#include "CharacterCustomization.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCustomization
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName Head;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName TorsoOrBody;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName LegsOrWeapon;

public:
	CUSTOMIZATION_API FCharacterCustomization();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCustomization) { return 0; }
