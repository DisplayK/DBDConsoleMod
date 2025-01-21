#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ScreenshotToolHook.h"
#include "UObject/NoExportTypes.h"
#include "ScreenshotSpiritHook.generated.h"

class UMaterial;

UCLASS(BlueprintType)
class UScreenshotSpiritHook : public UObject, public IScreenshotToolHook
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName SpiritId;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftObjectPtr<UMaterial> MaterialToFind;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName MaterialFieldName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MaterialFieldValue;

public:
	UScreenshotSpiritHook();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotSpiritHook) { return 0; }
