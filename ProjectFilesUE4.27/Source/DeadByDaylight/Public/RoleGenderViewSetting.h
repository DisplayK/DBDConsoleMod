#pragma once

#include "CoreMinimal.h"
#include "ScreenshotViewSetting.h"
#include "RoleDropdown.h"
#include "EGender.h"
#include "RoleGenderViewSetting.generated.h"

USTRUCT()
struct FRoleGenderViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FRoleDropdown RoleDropdown;

	UPROPERTY(EditAnywhere)
	EGender Gender;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FRoleGenderViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FRoleGenderViewSetting) { return 0; }
