#pragma once

#include "CoreMinimal.h"
#include "ScreenshotVFXCharmHookCharm.h"
#include "ScreenshotToolHook.h"
#include "UObject/NoExportTypes.h"
#include "ScreenshotVFXCharmHook.generated.h"

UCLASS()
class UScreenshotVFXCharmHook : public UObject, public IScreenshotToolHook
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FScreenshotVFXCharmHookCharm> Charms;

public:
	UScreenshotVFXCharmHook();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotVFXCharmHook) { return 0; }
