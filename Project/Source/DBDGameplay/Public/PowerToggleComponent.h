#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PowerToggleComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPowerToggleComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsInPower, Transient)
	bool _isInPower;

private:
	UFUNCTION()
	void OnRep_IsInPower() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPowerToggleComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPowerToggleComponent) { return 0; }
