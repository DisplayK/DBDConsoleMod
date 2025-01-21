#pragma once

#include "CoreMinimal.h"
#include "ScreenshotDebuggingAction.generated.h"

USTRUCT()
struct FScreenshotDebuggingAction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool Enabled;

public:
	DEADBYDAYLIGHT_API FScreenshotDebuggingAction();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotDebuggingAction) { return 0; }
