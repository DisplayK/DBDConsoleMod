#pragma once

#include "CoreMinimal.h"
#include "ForceLogoutMessage.generated.h"

USTRUCT()
struct FForceLogoutMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FForceLogoutMessage();
};

FORCEINLINE uint32 GetTypeHash(const FForceLogoutMessage) { return 0; }
