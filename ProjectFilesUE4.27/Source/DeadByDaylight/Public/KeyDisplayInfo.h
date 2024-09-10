#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyDisplayInfo.generated.h"

USTRUCT()
struct FKeyDisplayInfo
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FKey Key;

	UPROPERTY()
	FString KeyDisplayName;

	UPROPERTY()
	FString PromptType;

public:
	DEADBYDAYLIGHT_API FKeyDisplayInfo();
};

FORCEINLINE uint32 GetTypeHash(const FKeyDisplayInfo) { return 0; }
