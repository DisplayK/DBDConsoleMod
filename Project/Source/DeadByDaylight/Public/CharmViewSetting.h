#pragma once

#include "CoreMinimal.h"
#include "CharmDropdown.h"
#include "ScreenshotViewSetting.h"
#include "CharmViewSetting.generated.h"

USTRUCT()
struct FCharmViewSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FName Label;

	UPROPERTY(EditAnywhere)
	FCharmDropdown CharmID;

	UPROPERTY(EditAnywhere)
	FScreenshotViewSetting Settings;

public:
	DEADBYDAYLIGHT_API FCharmViewSetting();
};

FORCEINLINE uint32 GetTypeHash(const FCharmViewSetting) { return 0; }
