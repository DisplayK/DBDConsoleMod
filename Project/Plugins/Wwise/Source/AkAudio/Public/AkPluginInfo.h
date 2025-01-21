#pragma once

#include "CoreMinimal.h"
#include "AkPluginInfo.generated.h"

USTRUCT()
struct FAkPluginInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	FString Name;

	UPROPERTY(VisibleAnywhere)
	uint32 PluginID;

	UPROPERTY(VisibleAnywhere)
	FString DLL;

public:
	AKAUDIO_API FAkPluginInfo();
};

FORCEINLINE uint32 GetTypeHash(const FAkPluginInfo) { return 0; }
