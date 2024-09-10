#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "KnightOrderComponent.generated.h"

class UInteractionDefinition;
class AInteractable;
class AKnightGuard;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UKnightOrderComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTargetChanged);

private:
	UPROPERTY(Replicated, Transient)
	TArray<AInteractable*> _possiblyTargetableObjects;

	UPROPERTY(Transient)
	TArray<AInteractable*> _targetableObjects;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _targetedColor;

	UPROPERTY(EditDefaultsOnly)
	bool _showTargetableAura;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _targetableColor;

	UPROPERTY(EditDefaultsOnly)
	bool _showTargetableVFXWhilePowerIsReady;

	UPROPERTY(Transient)
	AInteractable* _currentTarget;

	UPROPERTY(Transient)
	AInteractable* _orderTarget;

	UPROPERTY(Transient, Export)
	UInteractionDefinition* _bestInteraction;

	UPROPERTY(Transient, Export)
	UInteractionDefinition* _currentInteraction;

	UPROPERTY(Transient)
	AKnightGuard* _guardWaitingForInteraction;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _targetingRange;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _palletOrderClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _killerBreakPalletClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _generatorOrderClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _killerBreakGeneratorClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _breakableOrderClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInteractionDefinition> _killerBreakBreakableClass;

	UPROPERTY(EditDefaultsOnly)
	float _updateRate;

	UPROPERTY(EditDefaultsOnly)
	float _maxTargetingAngle;

	UPROPERTY(EditDefaultsOnly)
	float _downRaycastLength;

private:
	UFUNCTION()
	void OnCurrentInteractionFinished();

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTargetableObjectsChanged(AInteractable* object, bool isTargetable);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnNewTargetSelected(AInteractable* newTarget, AInteractable* oldTarget);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UKnightOrderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKnightOrderComponent) { return 0; }
