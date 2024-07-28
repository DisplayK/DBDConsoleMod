#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "ContainsItemInterface.h"
#include "Interactable.h"
#include "SupplyCrateInteractable.generated.h"

class ACollectable;
class UChargeableComponent;
class USceneComponent;

UCLASS()
class DEADBYDAYLIGHT_API ASupplyCrateInteractable : public AInteractable, public IContainsItemInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _chargeableComponent;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACollectable> _containedCollectable;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _openInteractionSecondsToCharge;

	UPROPERTY(Replicated, Transient)
	ACollectable* _itemInSupplyCrate;

	UPROPERTY(VisibleAnywhere, Export)
	USceneComponent* _containingItemSpawnPoint;

	UPROPERTY(VisibleAnywhere, Export)
	USceneComponent* _itemDropPoint;

	UPROPERTY(ReplicatedUsing=OnRep_IsOpen, Transient)
	bool _isOpen;

	UPROPERTY(ReplicatedUsing=OnRep_IsAutoClosing, Transient)
	bool _isAutoClosing;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _crateSelfClosingTime;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _crateAutoCloseAnimationTime;

private:
	UFUNCTION()
	void OnRep_IsOpen();

	UFUNCTION()
	void OnRep_IsAutoClosing();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnIsOpened();

	UFUNCTION(BlueprintImplementableEvent)
	void OnIsClosing();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASupplyCrateInteractable();
};

FORCEINLINE uint32 GetTypeHash(const ASupplyCrateInteractable) { return 0; }
