#pragma once

#include "CoreMinimal.h"
#include "SDKEndMessage.generated.h"

USTRUCT()
struct FSDKEndMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FSDKEndMessage();
};

FORCEINLINE uint32 GetTypeHash(const FSDKEndMessage) { return 0; }
