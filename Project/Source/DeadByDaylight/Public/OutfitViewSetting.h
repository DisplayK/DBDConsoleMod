#pragma once

#include "CoreMinimal.h"
#include "OutfitDropdown.h"
#include "ScreenshotViewSetting.h"
#include "OutfitViewSetting.generated.h"

USTRUCT()
struct FOutfitViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FOutfitDropdown OutfitDropdown;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FOutfitViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FOutfitViewSetting) { return 0; }
