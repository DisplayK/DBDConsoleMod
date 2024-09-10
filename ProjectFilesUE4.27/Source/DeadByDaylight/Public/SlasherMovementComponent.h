#pragma once

#include "CoreMinimal.h"
#include "DBDCharacterMovementComponent.h"
#include "SlasherMovementComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USlasherMovementComponent : public UDBDCharacterMovementComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHitLedgeEvent);

public:
	UPROPERTY(BlueprintAssignable)
	FOnHitLedgeEvent OnHitLedgeEvent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float OnHitLedgeEventCooldown;

public:
	UFUNCTION(BlueprintPure)
	float GetBaseMaxSpeed() const;

private:
	UFUNCTION(Exec)
	void DBD_SimulateHack_LocalKillerMaxSpeedMultiplier(const float maxSpeedMultiplier);

	UFUNCTION(Exec)
	void DBD_KillerMaxSpeedMultiplier(const float maxSpeedMultiplier);

	UFUNCTION(Client, Reliable)
	void Client_Debug_SetKillerMaxSpeedMultiplier(const float maxSpeedMultiplier);

public:
	USlasherMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const USlasherMovementComponent) { return 0; }
