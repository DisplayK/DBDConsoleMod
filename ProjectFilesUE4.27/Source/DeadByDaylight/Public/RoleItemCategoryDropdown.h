#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "CharacterDropdown.h"
#include "RoleItemCategoryDropdown.generated.h"

USTRUCT()
struct FRoleItemCategoryDropdown: public FCharacterDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool IncludeOutfits;

	UPROPERTY(EditAnywhere)
	bool IncludeNone;

	UPROPERTY(EditAnywhere)
	ECustomizationCategory Category;

public:
	DEADBYDAYLIGHT_API FRoleItemCategoryDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FRoleItemCategoryDropdown) { return 0; }
