#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECharacterToolItemType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "ScreenshotPreviewActionConfig.generated.h"

class UTextureRenderTarget2D;
class UScreenshotPreviewWidget;

USTRUCT()
struct FScreenshotPreviewActionConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool SkyboxEnabled;

	UPROPERTY(EditAnywhere, EditFixedSize)
	TMap<ECharacterToolItemType, FIntPoint> FrameSizes;

	UPROPERTY(EditAnywhere)
	uint16 RenderResolution;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTextureRenderTarget2D> RenderTarget;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UScreenshotPreviewWidget> EditorWidgetClass;

public:
	DEADBYDAYLIGHT_API FScreenshotPreviewActionConfig();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotPreviewActionConfig) { return 0; }
