#pragma once

#include "CoreMinimal.h"
#include "RoleItemCategoryDropdown.h"
#include "CharacterAnimationDropdown.generated.h"

USTRUCT()
struct FCharacterAnimationDropdown: public FRoleItemCategoryDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool IncludeAllAnimations;

	UPROPERTY(EditAnywhere)
	bool IsAnimBP;

	UPROPERTY(EditAnywhere)
	FString AnimAsset;

public:
	DEADBYDAYLIGHT_API FCharacterAnimationDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterAnimationDropdown) { return 0; }
