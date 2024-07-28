#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationAssetDropdown.h"
#include "CharacterAnimationAssetOutfitOverride.generated.h"

USTRUCT()
struct FCharacterAnimationAssetOutfitOverride: public FCharacterAnimationAssetDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName OutfitId;

public:
	DEADBYDAYLIGHT_API FCharacterAnimationAssetOutfitOverride();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterAnimationAssetOutfitOverride) { return 0; }
