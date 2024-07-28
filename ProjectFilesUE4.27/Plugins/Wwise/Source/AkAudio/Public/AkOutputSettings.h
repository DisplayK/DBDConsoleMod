#pragma once

#include "CoreMinimal.h"
#include "PanningRule.h"
#include "AkChannelConfiguration.h"
#include "AkOutputSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkOutputSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AudioDeviceSharesetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IdDevice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	PanningRule PanRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AkChannelConfiguration ChannelConfig;

public:
	AKAUDIO_API FAkOutputSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkOutputSettings) { return 0; }
