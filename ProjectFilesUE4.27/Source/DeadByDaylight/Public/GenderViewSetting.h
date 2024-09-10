#pragma once

#include "CoreMinimal.h"
#include "RoleItemCategoryDropdown.h"
#include "EGender.h"
#include "ScreenshotViewSetting.h"
#include "GenderViewSetting.generated.h"

USTRUCT()
struct FGenderViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FRoleItemCategoryDropdown RoleItemCategory;

	UPROPERTY(EditAnywhere)
	EGender Gender;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FGenderViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FGenderViewSetting) { return 0; }
