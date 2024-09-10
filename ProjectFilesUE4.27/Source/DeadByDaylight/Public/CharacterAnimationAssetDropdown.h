#pragma once

#include "CoreMinimal.h"
#include "CharacterAnimationAssetDropdown.generated.h"

USTRUCT()
struct FCharacterAnimationAssetDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool IsAnimBP;

	UPROPERTY(EditAnywhere)
	FString AnimAsset;

public:
	DEADBYDAYLIGHT_API FCharacterAnimationAssetDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterAnimationAssetDropdown) { return 0; }
