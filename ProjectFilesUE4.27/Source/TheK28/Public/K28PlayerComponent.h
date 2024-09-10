#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K28PlayerComponent.generated.h"

class ACamperPlayer;
class UK28DayNightComponent;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UK28PlayerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(ReplicatedUsing=OnRep_DayNightComponent, meta=(BindWidgetOptional))
	TWeakObjectPtr<UK28DayNightComponent> _dayNightComponent;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _nightEffectMinimumDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _nightEffectMaximumDistance;

private:
	UFUNCTION()
	void OnSurvivorInRangeChanged(const bool inRange, ACamperPlayer* player);

protected:
	UFUNCTION()
	void OnRep_DayNightComponent();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28PlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28PlayerComponent) { return 0; }
