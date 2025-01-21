#pragma once

#include "CoreMinimal.h"
#include "CharmDropdown.h"
#include "ScreenshotVFXCharmHookCharmData.h"
#include "ScreenshotVFXCharmHookCharm.generated.h"

USTRUCT()
struct FScreenshotVFXCharmHookCharm
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FCharmDropdown Charm;

	UPROPERTY(EditAnywhere)
	FScreenshotVFXCharmHookCharmData Data;

public:
	DEADBYDAYLIGHT_API FScreenshotVFXCharmHookCharm();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotVFXCharmHookCharm) { return 0; }
