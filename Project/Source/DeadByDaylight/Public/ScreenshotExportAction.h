#pragma once

#include "CoreMinimal.h"
#include "ScreenshotExportAction.generated.h"

USTRUCT()
struct FScreenshotExportAction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool Enabled;

	UPROPERTY(EditAnywhere)
	bool ExportOnce;

	UPROPERTY(EditAnywhere)
	bool IncludeDLCFolder;

	UPROPERTY(EditAnywhere)
	TArray<FString> Directories;

public:
	DEADBYDAYLIGHT_API FScreenshotExportAction();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotExportAction) { return 0; }
