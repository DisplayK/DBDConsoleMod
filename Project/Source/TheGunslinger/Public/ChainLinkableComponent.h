#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChainLinkable.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "ChainLinkableComponent.generated.h"

class UChainPlayerMovementStatusEffect;
class URiflePlayerLinker;
class UBaseCameraTargetingStrategy;
class UPlayerReelInputAccelerationConstraintStrategy;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UChainLinkableComponent : public UActorComponent, public IChainLinkable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UBaseCameraTargetingStrategy> _cameraTargetingStrategyClass;

	UPROPERTY(EditAnywhere)
	FName _movementStatusEffectName;

	UPROPERTY(EditAnywhere)
	FName _linkedStatusEffectName;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UPlayerReelInputAccelerationConstraintStrategy* _inputAccelerationStrategy;

private:
	UPROPERTY(Transient, Export)
	URiflePlayerLinker* _chainLink;

	UPROPERTY(Replicated)
	FTagStateBool _isLinkedLingering;

	UPROPERTY(Replicated, Export)
	UChainPlayerMovementStatusEffect* _movementStatusEffect;

	UPROPERTY(Transient)
	UBaseCameraTargetingStrategy* _cameraStrategy;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UChainLinkableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChainLinkableComponent) { return 0; }
