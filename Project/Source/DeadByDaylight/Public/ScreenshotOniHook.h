#pragma once

#include "CoreMinimal.h"
#include "ScreenshotToolHook.h"
#include "UObject/NoExportTypes.h"
#include "ScreenshotOniHook.generated.h"

UCLASS(BlueprintType)
class UScreenshotOniHook : public UObject, public IScreenshotToolHook
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName OniId;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName DemonModeTag;

public:
	UScreenshotOniHook();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotOniHook) { return 0; }
