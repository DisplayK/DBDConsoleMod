#pragma once

#include "CoreMinimal.h"
#include "EBlinkPowerState.h"
#include "Components/ActorComponent.h"
#include "BlinkPowerEventDispatcher.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkPowerEventDispatcher : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFXEvent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFXUpdate, float, progressPercent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBlinkChargeStop, bool, stopByBlink);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsBlinkingChanged, bool, isBlinking);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsChargingBlinkChanged, bool, isChargingBlink);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBlinkPowerStateChanged, EBlinkPowerState, oldState, EBlinkPowerState, newState);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBlinkChargesChanged, int32, charges, bool, wasSetByRecharge);

public:
	UPROPERTY(BlueprintAssignable)
	FOnFXEvent OnFinishPlaying;

	UPROPERTY(BlueprintAssignable)
	FOnFXEvent OnStartBlinkChargeEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFXUpdate OnUpdateBlinkChargeEvent;

	UPROPERTY(BlueprintAssignable)
	FOnBlinkChargeStop OnStopBlinkChargeEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFXEvent OnEnterBlinkEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFXUpdate OnUpdateBlinkEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFXEvent OnExitBlinkEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFXEvent OnEnterChainBlinkEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFXUpdate OnUpdateChainBlinkEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFXEvent OnExitChainBlinkEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFXEvent OnEnterCooldownEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFXUpdate OnUpdateCooldownEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFXEvent OnExitCooldownEvent;

	UPROPERTY(BlueprintAssignable)
	FOnIsBlinkingChanged OnIsBlinkingChangedEvent;

	UPROPERTY(BlueprintAssignable)
	FOnIsChargingBlinkChanged OnIsChargingBlinkChangedEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFXEvent OnBlinkChargeFullEvent;

	UPROPERTY(BlueprintAssignable)
	FOnBlinkPowerStateChanged OnBlinkPowerStateChangedEvent;

	UPROPERTY(BlueprintAssignable)
	FOnBlinkChargesChanged OnBlinkChargesChangedEvent;

public:
	UBlinkPowerEventDispatcher();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkPowerEventDispatcher) { return 0; }
