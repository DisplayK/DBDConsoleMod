#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "GuardFlag.generated.h"

class UStatusEffect;
class ADBDPlayer;
class UPrimitiveComponent;
class AKnightGuard;

UCLASS()
class AGuardFlag : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _flagPickupHitbox;

private:
	UPROPERTY(Replicated)
	AKnightGuard* _owningGuard;

	UPROPERTY(ReplicatedUsing=OnRep_HuntedSurvivor)
	ADBDPlayer* _huntedSurvivor;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _flagPickupEnduranceEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _flagPickupEnduranceDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _flagPickupHasteEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _flagPickupHasteDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _flagPickupHasteModifier;

	UPROPERTY(Transient)
	ADBDPlayer* _clientHuntedSurvivor;

private:
	UFUNCTION()
	void OnRep_HuntedSurvivor();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnCamperCapturedFlag(ADBDPlayer* huntedSurvivor);

protected:
	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetHuntedSurvivor() const;

	UFUNCTION(BlueprintPure)
	float GetActivationTimeLeft() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorCapturedFlag(ADBDPlayer* previouslyHuntedSurvivor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFlagSpawned(float activationTimerDuration);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFlagDisappearDueToHuntEnding(ADBDPlayer* previouslyHuntedSurvivor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFlagActivationTimerCompleted();

private:
	UFUNCTION()
	void Authority_OnBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* other, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& hitResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AGuardFlag();
};

FORCEINLINE uint32 GetTypeHash(const AGuardFlag) { return 0; }
