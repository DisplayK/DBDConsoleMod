#pragma once

#include "CoreMinimal.h"
#include "NamedButton.h"
#include "ScreenshotPreviewActionConfig.h"
#include "ScreenshotPreviewAction.generated.h"

USTRUCT()
struct FScreenshotPreviewAction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool Enabled;

	UPROPERTY(EditAnywhere)
	FNamedButton RefreshBtn;

	UPROPERTY(EditAnywhere)
	FScreenshotPreviewActionConfig Configuration;

public:
	DEADBYDAYLIGHT_API FScreenshotPreviewAction();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotPreviewAction) { return 0; }
