#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Bloodlust.generated.h"

class ASlasherPlayer;
class ADBDPlayer;
class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBloodlust : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	UCurveFloat* BloodlustCurve;

private:
	UPROPERTY(ReplicatedUsing=OnRep_BloodlustTime)
	float _bloodlustTime;

	UPROPERTY(Transient)
	ASlasherPlayer* _owningKiller;

private:
	UFUNCTION()
	void OnRep_BloodlustTime(float oldBloodlustTime);

	UFUNCTION()
	void OnChaseStartedEvent(ADBDPlayer* chasedPlayer);

	UFUNCTION()
	void OnAllChaseEndedEvent();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ResetBloodlust();

public:
	UFUNCTION(BlueprintPure)
	float GetBloodlustTime() const;

	UFUNCTION(Exec)
	void DBD_SetBloodlust(const int32 amount, const bool enableDecay);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBloodlust();
};

FORCEINLINE uint32 GetTypeHash(const UBloodlust) { return 0; }
