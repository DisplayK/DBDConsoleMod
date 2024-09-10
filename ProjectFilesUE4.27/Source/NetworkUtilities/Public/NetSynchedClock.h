#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NetSynchedClock.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class NETWORKUTILITIES_API UNetSynchedClock : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _serverTimeUpdateDelay;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_RequestServerTime();

	UFUNCTION(Client, Reliable)
	void Client_ReportServerTime(float serverTime);

public:
	UNetSynchedClock();
};

FORCEINLINE uint32 GetTypeHash(const UNetSynchedClock) { return 0; }
