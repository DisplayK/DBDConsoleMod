#pragma once

#include "CoreMinimal.h"
#include "PatchFailMessage.generated.h"

USTRUCT()
struct FPatchFailMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FPatchFailMessage();
};

FORCEINLINE uint32 GetTypeHash(const FPatchFailMessage) { return 0; }
