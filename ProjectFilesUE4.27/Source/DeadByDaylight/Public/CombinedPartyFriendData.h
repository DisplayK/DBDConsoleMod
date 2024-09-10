#pragma once

#include "CoreMinimal.h"
#include "CombinedPartyFriendData.generated.h"

USTRUCT()
struct FCombinedPartyFriendData
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FCombinedPartyFriendData();
};

FORCEINLINE uint32 GetTypeHash(const FCombinedPartyFriendData) { return 0; }
