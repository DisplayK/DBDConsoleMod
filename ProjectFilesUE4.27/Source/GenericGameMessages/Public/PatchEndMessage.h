#pragma once

#include "CoreMinimal.h"
#include "PatchEndMessage.generated.h"

USTRUCT()
struct FPatchEndMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FPatchEndMessage();
};

FORCEINLINE uint32 GetTypeHash(const FPatchEndMessage) { return 0; }
