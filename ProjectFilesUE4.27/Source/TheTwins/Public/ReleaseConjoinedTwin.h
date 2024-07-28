#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "GameEventData.h"
#include "ReleaseConjoinedTwin.generated.h"

class AConjoinedTwin;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UReleaseConjoinedTwin : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _releaseMaxCharge;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _releaseExitTime;

	UPROPERTY(ReplicatedUsing=OnRep_ReleaseAnimationWentToTheEnd)
	bool _releaseAnimationWentToTheEnd;

private:
	UFUNCTION()
	void OnTwinSet(AConjoinedTwin* twin);

	UFUNCTION()
	void OnRep_ReleaseAnimationWentToTheEnd();

	UFUNCTION()
	void OnPowerCollected(ADBDPlayer* collector);

	UFUNCTION()
	void OnKillerStunned(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnReleaseTwinInteractionUpdateStart(ADBDPlayer* sister, AConjoinedTwin* brother);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnReleaseTwinInteractionUpdate(ADBDPlayer* sister, AConjoinedTwin* brother, float deltaTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnReleaseChargeComplete(ADBDPlayer* sister, AConjoinedTwin* brother);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnReleaseCancelled(ADBDPlayer* sister, AConjoinedTwin* brother);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UReleaseConjoinedTwin();
};

FORCEINLINE uint32 GetTypeHash(const UReleaseConjoinedTwin) { return 0; }
