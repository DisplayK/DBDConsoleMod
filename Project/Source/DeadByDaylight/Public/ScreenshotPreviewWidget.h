#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScreenshotPreviewWidget.generated.h"

UCLASS(EditInlineNew)
class UScreenshotPreviewWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UScreenshotPreviewWidget();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotPreviewWidget) { return 0; }
