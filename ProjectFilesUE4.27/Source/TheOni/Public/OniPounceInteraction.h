#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "OniPounceInteraction.generated.h"

class ASlasherPlayer;
class UOniDemonModeAttackStateComponent;
class UDemonModeComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UOniPounceInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UOniDemonModeAttackStateComponent* _chargedAttackState;

	UPROPERTY(Transient, Export)
	UDemonModeComponent* _demonModeComponent;

	UPROPERTY(Transient)
	ASlasherPlayer* _owningSlasher;

public:
	UOniPounceInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOniPounceInteraction) { return 0; }
