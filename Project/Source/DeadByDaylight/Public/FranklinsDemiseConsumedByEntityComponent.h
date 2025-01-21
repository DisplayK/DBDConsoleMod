#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FranklinsDemiseConsumedByEntityComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;
class UTimerObject;
class UChargerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFranklinsDemiseConsumedByEntityComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_ConsumeTimer, Export)
	UTimerObject* _consumeTimer;

	UPROPERTY(Transient, Export)
	UStatusEffect* _camperStatus;

	UPROPERTY(Transient)
	ADBDPlayer* _previousOwner;

	UPROPERTY(Transient)
	ADBDPlayer* _originatingPerkOwner;

	UPROPERTY(Transient, Export)
	UChargerComponent* _itemChargerComponent;

private:
	UFUNCTION()
	void OnRep_ConsumeTimer();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnConsumedByEntity();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_StartConsume(float duration, ADBDPlayer* previousOwner, ADBDPlayer* slasher);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFranklinsDemiseConsumedByEntityComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFranklinsDemiseConsumedByEntityComponent) { return 0; }
