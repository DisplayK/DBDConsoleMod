#pragma once

#include "CoreMinimal.h"
#include "EPalletPushSideStrategy.h"
#include "PalletPushSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalletPushSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IgnorePlayerExecutingPulldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPalletPushSideStrategy PalletPushSideStrategy;

public:
	DEADBYDAYLIGHT_API FPalletPushSettings();
};

FORCEINLINE uint32 GetTypeHash(const FPalletPushSettings) { return 0; }
