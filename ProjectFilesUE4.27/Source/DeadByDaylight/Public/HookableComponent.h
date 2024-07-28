#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HookableComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHookableComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_SetDrainTimerPercentLeft(float percentTime);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable)
	void Multicast_DebugSetHookDrainStage(int32 drainStage);

public:
	UFUNCTION(BlueprintPure)
	int32 GetHookedCount() const;

	UFUNCTION(BlueprintPure)
	float GetDrainTimerPercentLeft() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetDrainTimerPercentLeft(float percentTime);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DebugSetHookEscapeAutoSuccess(const bool success);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DebugSetHookEscapeAutoFail(const bool fail);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DebugSetHookDrainStage(int32 drainStage);

public:
	UHookableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHookableComponent) { return 0; }
