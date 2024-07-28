#pragma once

#include "CoreMinimal.h"
#include "BotMatchConfig.generated.h"

USTRUCT()
struct FBotMatchConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FString> DSPlatformSBM;

	UPROPERTY()
	TArray<FString> DSPlatformTutorialBotMatch;

public:
	DEADBYDAYLIGHT_API FBotMatchConfig();
};

FORCEINLINE uint32 GetTypeHash(const FBotMatchConfig) { return 0; }
