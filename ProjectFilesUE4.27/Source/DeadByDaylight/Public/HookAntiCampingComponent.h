#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "HookAntiCampingComponent.generated.h"

class UCurveFloat;
class UStatusEffect;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHookAntiCampingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(Replicated)
	bool IsAntiCampingFeatureEnabled;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _detectionRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _timeToActivate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _enduranceEffectActiveTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCurveFloat* _chargeSpeedCurve;

private:
	UPROPERTY(EditDefaultsOnly)
	bool _addEnduranceEffectAfterSelfUnhook;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _enduranceEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _selfUnhookAlwaysSucceedEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _selfUnhookAlwaysSucceedEffect;

	UPROPERTY(Replicated)
	float _chargeSpeed;

	UPROPERTY(Replicated)
	float _timerPercent;

	UPROPERTY(ReplicatedUsing=OnRep_UnhookingSelfAllowedDuringStrugglePhase)
	bool _unhookingSelfAllowedDuringStrugglePhase;

private:
	UFUNCTION()
	void OnRep_UnhookingSelfAllowedDuringStrugglePhase();

public:
	UFUNCTION(BlueprintPure)
	float GetCampTimerCompletionPercent() const;

	UFUNCTION(BlueprintPure)
	bool CanUnhookWithAutoSuccess() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHookAntiCampingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHookAntiCampingComponent) { return 0; }
