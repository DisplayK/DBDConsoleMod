#pragma once

#include "CoreMinimal.h"
#include "AIInteractableTargetInterface.h"
#include "PlayerInteractable.h"
#include "CamperInteractable.generated.h"

class USphereComponent;
class UBoxComponent;
class UActivatorComponent;
class UInteractor;
class ACamperPlayer;
class UChargeableComponent;
class UChargeableInteractionDefinition;
class USceneComponent;
class UInteractionDefinition;

UCLASS()
class DEADBYDAYLIGHT_API ACamperInteractable : public APlayerInteractable, public IAIInteractableTargetInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, Transient, Export)
	TArray<UInteractor*> HealingInteractors;

	UPROPERTY(BlueprintReadWrite, Transient, Export)
	TArray<UChargeableInteractionDefinition*> _healInteractions;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _killCharge;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _snapOutOfItCharge;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _wakeUpCharge;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _crowDismissCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UActivatorComponent* _activator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _killInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _killInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _killHealthyInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _mainInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _healingInteractor1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _selfInteractionsInteractor;

	UPROPERTY(Transient, Export)
	USceneComponent* _rootComponent;

private:
	UFUNCTION()
	void UpdateTargetHPSlot();

public:
	UFUNCTION(BlueprintCallable)
	void SetKillInteraction(UInteractionDefinition* killInteraction);

private:
	UFUNCTION(Server, Unreliable, WithValidation)
	void ServerMoveOut();

protected:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UInteractor* GetSlasherInteractor() const;

public:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetOwningSurvivor() const;

public:
	ACamperInteractable();
};

FORCEINLINE uint32 GetTypeHash(const ACamperInteractable) { return 0; }
