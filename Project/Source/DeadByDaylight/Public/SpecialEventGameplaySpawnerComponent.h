#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpecialEventGameplaySpawnerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USpecialEventGameplaySpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnComponentSpawned();

public:
	USpecialEventGameplaySpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USpecialEventGameplaySpawnerComponent) { return 0; }
