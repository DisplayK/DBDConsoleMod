#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K25SurvivorChainAttachmentData.h"
#include "K25SurvivorChainAttachmentComponent.generated.h"

class AK25Chain;
class UInteractionDefinition;
class UChargeableComponent;
class AK25SurvivorChainAttachmentAnchor;
class UK25SurvivorChainRotationStrategy;
class ASlasherPlayer;
class UK25ChainAttachmentReplicationComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK25_API UK25SurvivorChainAttachmentComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AK25SurvivorChainAttachmentAnchor> _attachmentAnchorClass;

	UPROPERTY(EditDefaultsOnly)
	TArray<FK25SurvivorChainAttachmentData> _survivorAnchorData;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UK25SurvivorChainRotationStrategy> _survivorChainRotationStrategyClass;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<UInteractionDefinition>> _interruptableInteractionClasses;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _maximumNumberOfChainsAttached;

private:
	UPROPERTY(Replicated, Transient)
	TArray<AK25SurvivorChainAttachmentAnchor*> _chainAttachmentAnchors;

	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<AK25Chain>> _chainsAttached;

	UPROPERTY(ReplicatedUsing=OnRep_RemoveChainChargeableComponent, Transient, Export)
	UChargeableComponent* _removeChainChargeableComponent;

	UPROPERTY(Transient, Export)
	UK25SurvivorChainRotationStrategy* _survivorChainRotationStrategy;

	UPROPERTY(Transient, Export)
	UK25ChainAttachmentReplicationComponent* _chainAttachmentReplicationComponent;

private:
	UFUNCTION()
	void OnRep_RemoveChainChargeableComponent();

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_TriggerHitSurvivorInExitAreaSFX(ASlasherPlayer* killer);

public:
	UFUNCTION(BlueprintPure)
	AK25Chain* GetFirstChainToRelease() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerHitSurvivorInExitAreaSFX(ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK25SurvivorChainAttachmentComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25SurvivorChainAttachmentComponent) { return 0; }
