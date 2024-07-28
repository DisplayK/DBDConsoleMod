#pragma once

#include "CoreMinimal.h"
#include "ScreenshotToolPathInfo.generated.h"

USTRUCT()
struct FScreenshotToolPathInfo
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	bool IncludeDLCFolder;

	UPROPERTY(EditAnywhere)
	FString Path;

public:
	DEADBYDAYLIGHT_API FScreenshotToolPathInfo();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotToolPathInfo) { return 0; }
