#pragma once

#include "CoreMinimal.h"
#include "IpConnection.h"
#include "DBDRemotePlayer.generated.h"

UCLASS(NonTransient)
class UDBDRemotePlayer : public UIpConnection
{
	GENERATED_BODY()

public:
	UDBDRemotePlayer();
};

FORCEINLINE uint32 GetTypeHash(const UDBDRemotePlayer) { return 0; }
