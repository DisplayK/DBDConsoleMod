#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "K25ChainAttachedStatusEffect.generated.h"

class UCurveFloat;
class UK25SurvivorChainAttachmentComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25ChainAttachedStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	UCurveFloat* _percentageReductionSpeedPerChainCurve;

private:
	UPROPERTY(ReplicatedUsing=OnRep_ChainAttachementComponent, Transient, Export)
	UK25SurvivorChainAttachmentComponent* _chainAttachmentComponent;

	UPROPERTY(Transient)
	int32 _cachedNumberOfChainsAttached;

private:
	UFUNCTION()
	void OnRep_ChainAttachementComponent();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK25ChainAttachedStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainAttachedStatusEffect) { return 0; }
