#pragma once

#include "CoreMinimal.h"
#include "ReplicationTimerData.h"
#include "Components/ActorComponent.h"
#include "TimerObject.generated.h"

class UTimerObject;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class NETWORKUTILITIES_API UTimerObject : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_TimerDataUpdated, Transient)
	FReplicationTimerData _replicationData;

private:
	UFUNCTION()
	void OnRep_TimerDataUpdated(FReplicationTimerData oldData);

public:
	UFUNCTION(BlueprintPure)
	bool IsTimerActive() const;

	UFUNCTION(BlueprintPure)
	bool IsPaused() const;

	UFUNCTION(BlueprintPure)
	bool IsDone() const;

	UFUNCTION(BlueprintPure)
	float GetRemainingTimePercent() const;

	UFUNCTION(BlueprintPure)
	float GetRemainingTime() const;

	UFUNCTION(BlueprintPure)
	float GetElapsedTimePercent() const;

	UFUNCTION(BlueprintPure)
	float GetElapsedTime() const;

	UFUNCTION(BlueprintPure)
	float GetDuration() const;

	UFUNCTION(BlueprintCallable)
	static UTimerObject* CreateTimer(AActor* owner);

	UFUNCTION(BlueprintCallable)
	void Authority_Unpause();

	UFUNCTION(BlueprintCallable)
	void Authority_Start(float duration);

	UFUNCTION(BlueprintCallable)
	void Authority_SetPaused(bool paused);

	UFUNCTION(BlueprintCallable)
	void Authority_Pause();

	UFUNCTION(BlueprintCallable)
	void Authority_Clear();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTimerObject();
};

FORCEINLINE uint32 GetTypeHash(const UTimerObject) { return 0; }
