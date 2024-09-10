#pragma once

#include "CoreMinimal.h"
#include "MatchEndMessage.generated.h"

USTRUCT()
struct FMatchEndMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FMatchEndMessage();
};

FORCEINLINE uint32 GetTypeHash(const FMatchEndMessage) { return 0; }
