#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TheTwinsCheatComponent.generated.h"

class UTwinPossessionComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTheTwinsCheatComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TrySendThePlayerBackInKiller(UTwinPossessionComponent* twinPossessionComponent);

public:
	UFUNCTION(Exec)
	void DBD_TwinDestroyTheTwin();

public:
	UTheTwinsCheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTheTwinsCheatComponent) { return 0; }
