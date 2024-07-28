#pragma once

#include "CoreMinimal.h"
#include "ChargedAttackStateComponent.h"
#include "OnChargedAttackReadyChanged.h"
#include "OniDemonModeAttackStateComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOniDemonModeAttackStateComponent : public UChargedAttackStateComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnChargedAttackReadyChanged OnChargedAttackReadyChanged;

private:
	UFUNCTION(Server, Reliable)
	void Server_ClearChargingState();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ClearChargingState();

public:
	UOniDemonModeAttackStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOniDemonModeAttackStateComponent) { return 0; }
