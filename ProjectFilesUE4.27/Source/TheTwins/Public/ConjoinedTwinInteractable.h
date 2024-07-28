#pragma once

#include "CoreMinimal.h"
#include "PlayerInteractable.h"
#include "ConjoinedTwinInteractable.generated.h"

class UChargeableComponent;

UCLASS()
class AConjoinedTwinInteractable : public APlayerInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _possessKillerChargeable;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _twinBeingPossessedChargeable;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _chargeTwinJumpChargeable;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _removeTwinChargeable;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _destroyTwinChargeable;

public:
	AConjoinedTwinInteractable();
};

FORCEINLINE uint32 GetTypeHash(const AConjoinedTwinInteractable) { return 0; }
