#pragma once

#include "CoreMinimal.h"
#include "AimAssistInfo.generated.h"

USTRUCT()
struct FAimAssistInfo
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FAimAssistInfo();
};

FORCEINLINE uint32 GetTypeHash(const FAimAssistInfo) { return 0; }
