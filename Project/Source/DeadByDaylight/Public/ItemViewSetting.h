#pragma once

#include "CoreMinimal.h"
#include "CustomizationItemDropdown.h"
#include "ScreenshotViewSetting.h"
#include "ItemViewSetting.generated.h"

USTRUCT()
struct FItemViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FCustomizationItemDropdown Item;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FItemViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FItemViewSetting) { return 0; }
