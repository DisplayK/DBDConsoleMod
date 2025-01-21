#pragma once

#include "CoreMinimal.h"
#include "PatchStartMessage.generated.h"

USTRUCT()
struct FPatchStartMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FPatchStartMessage();
};

FORCEINLINE uint32 GetTypeHash(const FPatchStartMessage) { return 0; }
