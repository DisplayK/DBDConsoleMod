#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationDropdown.h"
#include "CharacterAnimationAssetOutfitOverride.h"
#include "CharacterAnimation.generated.h"

USTRUCT()
struct FCharacterAnimation
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FCharacterAnimationDropdown Data;

	UPROPERTY(EditAnywhere)
	TArray<FCharacterAnimationAssetOutfitOverride> OutfitOverrides;

public:
	DEADBYDAYLIGHT_API FCharacterAnimation();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterAnimation) { return 0; }
