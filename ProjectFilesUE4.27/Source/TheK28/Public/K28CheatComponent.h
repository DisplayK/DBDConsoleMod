#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K28CheatComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28CheatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(Exec)
	void DBD_K28TriggerNextNightCycle();

	UFUNCTION(Exec)
	void DBD_K28LockAllLockbars();

	UFUNCTION(Exec)
	void DBD_K28DisplayLockerClusters(float secondsToDisplayDebugElements);

	UFUNCTION(Exec)
	void DBD_K28BreakAllLocks();

public:
	UK28CheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28CheatComponent) { return 0; }
