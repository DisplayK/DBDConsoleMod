#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NightmareCheatComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENIGHTMARE_API UNightmareCheatComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_AllowWakeUpAnyClock)
	bool _allowWakeUpAnyClock;

private:
	UFUNCTION()
	void OnRep_AllowWakeUpAnyClock();

public:
	UFUNCTION(Exec)
	void DBD_AllowWakeUpAtAnyClock(bool allow);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UNightmareCheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UNightmareCheatComponent) { return 0; }
