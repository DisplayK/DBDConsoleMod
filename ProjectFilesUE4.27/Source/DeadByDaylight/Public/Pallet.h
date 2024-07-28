#pragma once

#include "CoreMinimal.h"
#include "PalletPulldownBlockable.h"
#include "Interactable.h"
#include "Engine/EngineTypes.h"
#include "EPalletState.h"
#include "UObject/NoExportTypes.h"
#include "EPalletStunZoneSideStrategy.h"
#include "PalletPushSettings.h"
#include "Pallet.generated.h"

class AActor;
class UInteractionDefinition;
class UDBDNavEvadeLoopComponent;
class ADBDPlayer;
class UPrimitiveComponent;
class UPalletPulldownBlockerComponent;
class UBoxComponent;
class ACamperPlayer;
class USkeletalMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API APallet : public AInteractable, public IPalletPulldownBlockable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float PalletDownEvadeDoorFrontPointOffset;

protected:
	UPROPERTY(BlueprintReadWrite, Transient)
	EPalletState _state;

	UPROPERTY(Transient)
	bool _isPendingDestruction;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool _isIllusionaryPalletDown;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool _isDestroyedByEntity;

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _destroyLeft;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _destroyRight;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _pushBox;

	UPROPERTY(EditAnywhere)
	float _maxDotproductThresholdForPulldownAccross;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _fallDuration;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _stunBoxLeft;

	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _stunBoxRight;

	UPROPERTY(Transient)
	TSet<AActor*> _stunnedActors;

	UPROPERTY(Transient)
	ADBDPlayer* _playerExecutingPulldown;

	UPROPERTY(Transient)
	FPalletPushSettings _pushSettings;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavEvadeLoopComponent* _navEvadeLoopComponent;

	UPROPERTY(Transient, Export)
	UPalletPulldownBlockerComponent* _palletPulldownBlockerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _isDreamPallet;

public:
	UFUNCTION(BlueprintCallable)
	void SetPendingDestruction(bool isPendingDestruction);

protected:
	UFUNCTION(BlueprintCallable)
	void SetPalletState(EPalletState state);

	UFUNCTION(BlueprintImplementableEvent)
	void ResetPallet();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PulldownPallet();

	UFUNCTION(BlueprintCallable)
	void PullDown(ADBDPlayer* player, const FPalletPushSettings& pushSettings, const EPalletStunZoneSideStrategy stunZoneSideStrategy);

private:
	UFUNCTION()
	void OnStunOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnPalletStunHit();

	UFUNCTION(BlueprintImplementableEvent)
	void OnPalletPulledUp_BP();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnFallen();

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StunActor(AActor* actor, ACamperPlayer* survivor, bool stunBreakPallet);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ResetPallet();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PulldownPallet();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_EntityExplodePallet(ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	bool IsPulldownBlockedByEntity() const;

	UFUNCTION(BlueprintPure)
	bool IsPendingDestruction() const;

	UFUNCTION(BlueprintPure)
	bool IsDestroyedByEntity() const;

protected:
	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetPlayerDoingPulldown() const;

public:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USkeletalMeshComponent* GetPalletSkeletalMeshComponent() const;

	UFUNCTION(BlueprintPure)
	bool GetIsPulledDown() const;

	UFUNCTION(BlueprintPure)
	bool GetIsDreamPallet() const;

protected:
	UFUNCTION(BlueprintPure)
	float GetFallDuration() const;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	void GetDestructibleAreaPrimitiveComponents(TArray<UPrimitiveComponent*>& prims) const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ExplodeStunPallet(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ExplodePallet(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EntityExplodePallet(ADBDPlayer* player);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_PalletPullDownFXImmediateHide();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPalletPulldownBlockedByEntityShow();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPalletPulldownBlockedByEntityHide();

	UFUNCTION(BlueprintPure)
	bool CanPulldown(const ADBDPlayer* player, const FVector& interactionAxis, const bool isStationary) const;

private:
	UFUNCTION()
	void Authority_OnOverlapPushBox(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	APallet();
};

FORCEINLINE uint32 GetTypeHash(const APallet) { return 0; }
