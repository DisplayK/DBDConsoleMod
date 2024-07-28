#pragma once

#include "CoreMinimal.h"
#include "RoleUnlockMessage.generated.h"

USTRUCT()
struct FRoleUnlockMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FRoleUnlockMessage();
};

FORCEINLINE uint32 GetTypeHash(const FRoleUnlockMessage) { return 0; }
