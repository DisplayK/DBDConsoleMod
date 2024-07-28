#pragma once

#include "CoreMinimal.h"
#include "BaseTrap.h"
#include "OnIsTrapSetChanged.h"
#include "Engine/EngineTypes.h"
#include "BearTrap.generated.h"

class UAnimationMontageSlave;
class UBoxPlayerOverlapComponent;
class UMapActorComponent;
class UBoxComponent;
class UPrimitiveComponent;
class UCapsulePlayerOverlapComponent;
class UDBDOutlineComponent;
class USphereComponent;
class UBearTrapOutlineUpdateStrategy;
class UDBDNavModifierComponent;
class UMontagePlayer;
class ASlasherPlayer;
class ADBDPlayer;
class UInteractor;
class UInteractionDefinition;
class UAnimMontage;
class AActor;
class UBearTrapAnimInstance;
class UAkComponent;

UCLASS()
class ABearTrap : public ABaseTrap
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UBoxPlayerOverlapComponent* _interactionVolume;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UCapsulePlayerOverlapComponent* _trapPlayerDetectionZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UBoxComponent* _killerSafetyZoneComponent;

	UPROPERTY(EditAnywhere, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, meta=(BindWidgetOptional))
	UBearTrapOutlineUpdateStrategy* _outlineUpdateStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UMapActorComponent* _mapActorComponent;

	UPROPERTY(VisibleAnywhere, meta=(BindWidgetOptional))
	USphereComponent* _mapActorCollision;

	UPROPERTY(VisibleAnywhere, meta=(BindWidgetOptional))
	USphereComponent* _trapBlocker;

	UPROPERTY(EditAnywhere, meta=(BindWidgetOptional))
	UMontagePlayer* _montagePlayer;

	UPROPERTY(BlueprintAssignable)
	FOnIsTrapSetChanged _onIsTrapSetChanged;

	UPROPERTY(BlueprintReadOnly, Transient)
	ADBDPlayer* _ownerPlayer;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavModifierComponent* _dangerNavModifierComponent;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	bool _isTrapperOutOfSafetyZone;

	UPROPERTY(EditDefaultsOnly)
	int32 _maximumAttemptsForSelfUntrap;

	UPROPERTY(Replicated)
	int32 _selfUntrapAttemptsRemaining;

	UPROPERTY(Export)
	UInteractor* _mainInteractor;

	UPROPERTY(Export)
	UInteractionDefinition* _trapSurvivor;

	UPROPERTY(Export)
	UInteractionDefinition* _trapKiller;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _trappedPlayer;

	UPROPERTY(Export)
	UAnimationMontageSlave* _animationMontageSlave;

public:
	UFUNCTION(BlueprintCallable)
	void TrySetTrappedPlayer(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void SetTrappedPlayerSinceMoved(bool didTrap);

protected:
	UFUNCTION(BlueprintCallable)
	void SetTrappedPlayer(ADBDPlayer* trappedPlayer);

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void PlayMontage(UAnimMontage* montage) const;

private:
	UFUNCTION()
	void OnTrappedPlayerPickedUp(ADBDPlayer* picker);

	UFUNCTION()
	void OnTrapDetectionZoneOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnTrapDetectionZoneOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION()
	void OnSlasherSet(ASlasherPlayer* slasher);

private:
	UFUNCTION()
	void OnSafetyZoneEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnLevelReadyToPlay_Implementation();

	UFUNCTION()
	void OnCollectUpdateStart();

	UFUNCTION()
	void OnCollectUpdateEnd();

public:
	UFUNCTION(BlueprintPure)
	bool IsTrapperOutOfSafetyZone() const;

	UFUNCTION(BlueprintCallable)
	void InitializeTrapSurvivorInteraction(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable)
	void InitializeTrapKillerInteraction(UInteractionDefinition* interaction);

	UFUNCTION(BlueprintCallable)
	void InitializeMainInteractor(UInteractor* interactor);

	UFUNCTION(BlueprintPure)
	bool HasTrappedPlayerSinceMoved() const;

	UFUNCTION(BlueprintPure)
	bool HasTrappedPlayer() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetTrappedPlayer() const;

	UFUNCTION(BlueprintPure)
	UBearTrapAnimInstance* GetAnimInstance() const;

protected:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UAkComponent* GetAkAudioComponent() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerTrapped(ADBDPlayer* trappedPlayer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABearTrap();
};

FORCEINLINE uint32 GetTypeHash(const ABearTrap) { return 0; }
