#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnlineSystemHandler.generated.h"

class UGameSessionDS;
class UCrossPlatformManager;
class UDBDServerInstance;
class ULocalPlayer;
class UDBDGameInstance;

UCLASS(Transient)
class DEADBYDAYLIGHT_API UOnlineSystemHandler : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ULocalPlayer* _cachedLocalPlayer;

	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

	UPROPERTY(Transient)
	UGameSessionDS* _gameSessionDS;

	UPROPERTY(Transient)
	UDBDServerInstance* _serverInstance;

	UPROPERTY(Transient)
	UCrossPlatformManager* _crossPlatformManager;

public:
	UOnlineSystemHandler();
};

FORCEINLINE uint32 GetTypeHash(const UOnlineSystemHandler) { return 0; }
