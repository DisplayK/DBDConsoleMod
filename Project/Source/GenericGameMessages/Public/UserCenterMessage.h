#pragma once

#include "CoreMinimal.h"
#include "UserCenterMessage.generated.h"

USTRUCT()
struct FUserCenterMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FUserCenterMessage();
};

FORCEINLINE uint32 GetTypeHash(const FUserCenterMessage) { return 0; }
