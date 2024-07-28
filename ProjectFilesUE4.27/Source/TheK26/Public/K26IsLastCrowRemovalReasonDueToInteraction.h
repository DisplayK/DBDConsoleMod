#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "FK26AttachedCrowRemovalReason.h"
#include "K26IsLastCrowRemovalReasonDueToInteraction.generated.h"

class AK26AttachedCrow;
class ACamperPlayer;
class UK26PowerStatusHandlerComponent;
class ASlasherPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK26IsLastCrowRemovalReasonDueToInteraction : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_OwningAttachedCrow, Transient)
	AK26AttachedCrow* _owningAttachedCrow;

	UPROPERTY(Transient, Export)
	UK26PowerStatusHandlerComponent* _statusHandlerComponent;

private:
	UFUNCTION()
	void OnSurvivorStatusIndicatorSet(AK26AttachedCrow* attachedCrow);

	UFUNCTION()
	void OnRep_OwningAttachedCrow();

	UFUNCTION()
	void OnLastRemovalReasonSet(FK26AttachedCrowRemovalReason lastCrowRemovalReason);

	UFUNCTION()
	void Authority_OnSurvivorStatusIndicatorSet(const ACamperPlayer* survivor, AK26AttachedCrow* attachedCrow);

	UFUNCTION()
	void Authority_OnKillerSet(ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK26IsLastCrowRemovalReasonDueToInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK26IsLastCrowRemovalReasonDueToInteraction) { return 0; }
