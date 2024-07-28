#pragma once

#include "CoreMinimal.h"
#include "ECharmCategory.h"
#include "ScreenshotViewSetting.h"
#include "CharmCategorySetting.generated.h"

USTRUCT()
struct FCharmCategorySetting
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	ECharmCategory CharmCategory;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FCharmCategorySetting();
};

FORCEINLINE uint32 GetTypeHash(const FCharmCategorySetting) { return 0; }
