#pragma once

#include "CoreMinimal.h"
#include "LoadStartMessage.generated.h"

USTRUCT()
struct FLoadStartMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FLoadStartMessage();
};

FORCEINLINE uint32 GetTypeHash(const FLoadStartMessage) { return 0; }
