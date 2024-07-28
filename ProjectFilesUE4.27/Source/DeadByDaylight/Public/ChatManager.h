#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChatManager.generated.h"

class UDBDGameInstance;

UCLASS()
class DEADBYDAYLIGHT_API AChatManager : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDBDGameInstance* _gameInstance;

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DisplayMessage(const FString& chatIdentifier, int32 playerIndex, const FString& mirrorsId, const FString& msg);

public:
	AChatManager();
};

FORCEINLINE uint32 GetTypeHash(const AChatManager) { return 0; }
