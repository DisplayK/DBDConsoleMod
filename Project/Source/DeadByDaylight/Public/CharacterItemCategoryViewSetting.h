#pragma once

#include "CoreMinimal.h"
#include "RoleItemCategoryDropdown.h"
#include "ScreenshotViewSetting.h"
#include "CharacterItemCategoryViewSetting.generated.h"

USTRUCT()
struct FCharacterItemCategoryViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FRoleItemCategoryDropdown CharacterDropdown;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FCharacterItemCategoryViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterItemCategoryViewSetting) { return 0; }
