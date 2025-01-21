#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "HalloweenEventComponent.generated.h"

class USectionnedChargeableComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UHalloweenEventComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_Vial, Export)
	USectionnedChargeableComponent* _toxinVialComponent;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SpawnVial(float initialCharge);

	UFUNCTION()
	void OnRep_Vial();

	UFUNCTION()
	void OnFinishedPlaying(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintPure)
	bool IsVialFull() const;

	UFUNCTION(BlueprintPure)
	USectionnedChargeableComponent* GetVial() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHalloweenEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHalloweenEventComponent) { return 0; }
