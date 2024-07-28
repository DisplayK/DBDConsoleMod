#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "EChainHuntState.h"
#include "ChainHuntStateData.h"
#include "LamentConfigurationChainHuntComponent.generated.h"

class UCurveFloat;
class UK25SurvivorChainHuntEffectsComponent;
class UK25KillerChainHuntEffectsComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ULamentConfigurationChainHuntComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _floorChainHuntTimeBetweenChainStrikes;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chainHuntChargeTime;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _chainNumberPerChainHuntCluster;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _timeBetweenChainHuntClusterStrikes;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK25KillerChainHuntEffectsComponent> _killerChainHuntEffectsComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK25SurvivorChainHuntEffectsComponent> _survivorChainHuntEffectsComponentClass;

private:
	UPROPERTY(Transient, Export)
	UK25KillerChainHuntEffectsComponent* _killerChainHuntEffectsComponent;

	UPROPERTY(Replicated, Transient, Export)
	TArray<UK25SurvivorChainHuntEffectsComponent*> _chainHuntEffectsComponents;

	UPROPERTY(Transient)
	float _cachedAdditiveChainStrikeDelayTime;

	UPROPERTY(ReplicatedUsing=OnRep_ChainHuntStateData, Transient)
	FChainHuntStateData _chainHuntStateData;

	UPROPERTY(Transient)
	EChainHuntState _oldChainHuntState;

private:
	UFUNCTION()
	void OnRep_ChainHuntStateData();

public:
	UFUNCTION(BlueprintPure)
	float GetChainHuntProgressPercentage() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULamentConfigurationChainHuntComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULamentConfigurationChainHuntComponent) { return 0; }
