#pragma once

#include "CoreMinimal.h"
#include "EAkPanningRule.h"
#include "EAkChannelConfigType.h"
#include "AkMainOutputSettings.generated.h"

USTRUCT()
struct FAkMainOutputSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString AudioDeviceShareset;

	UPROPERTY(EditAnywhere)
	uint32 DeviceID;

	UPROPERTY(EditAnywhere)
	EAkPanningRule PanningRule;

	UPROPERTY(EditAnywhere)
	EAkChannelConfigType ChannelConfigType;

	UPROPERTY(EditAnywhere)
	uint32 ChannelMask;

	UPROPERTY(EditAnywhere)
	uint32 NumberOfChannels;

public:
	AKAUDIO_API FAkMainOutputSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkMainOutputSettings) { return 0; }
