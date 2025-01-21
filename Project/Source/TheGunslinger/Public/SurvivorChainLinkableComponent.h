#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Engine/NetSerialization.h"
#include "ChainLinkableComponent.h"
#include "Templates/SubclassOf.h"
#include "SurvivorChainLinkableComponent.generated.h"

class USurvivorReelVelocityAdditiveStrategy;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API USurvivorChainLinkableComponent : public UChainLinkableComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _pullbackAngle;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _immobilizationDuration;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _linkableInteractionTags;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _cancelableInteractionTags;

	UPROPERTY(EditAnywhere)
	TSubclassOf<USurvivorReelVelocityAdditiveStrategy> _velocityAdditiveStrategyClass;

	UPROPERTY(EditAnywhere)
	FName _immobilizationEffectName;

	UPROPERTY(Replicated)
	FVector_NetQuantize10 _linkedMoveInput;

	UPROPERTY(Export)
	UStatusEffect* _immobilizationEffect;

	UPROPERTY(ReplicatedUsing=OnRep_VelocityAdditiveStrategy, Transient, Export)
	USurvivorReelVelocityAdditiveStrategy* _velocityAdditiveStrategy;

private:
	UFUNCTION()
	void OnRep_VelocityAdditiveStrategy();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorChainLinkableComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorChainLinkableComponent) { return 0; }
