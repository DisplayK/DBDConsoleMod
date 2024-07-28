#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FriendManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UFriendManager : public UObject
{
	GENERATED_BODY()

public:
	UFriendManager();
};

FORCEINLINE uint32 GetTypeHash(const UFriendManager) { return 0; }
