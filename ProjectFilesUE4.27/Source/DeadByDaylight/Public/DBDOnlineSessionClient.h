#pragma once

#include "CoreMinimal.h"
#include "OnlineSessionClient.h"
#include "DBDOnlineSessionClient.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDOnlineSessionClient : public UOnlineSessionClient
{
	GENERATED_BODY()

public:
	UDBDOnlineSessionClient();
};

FORCEINLINE uint32 GetTypeHash(const UDBDOnlineSessionClient) { return 0; }
