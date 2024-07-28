#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "K29UseInfectionRemoverInteraction.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29UseInfectionRemoverInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _killerInstinctClass;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _killerInstinctDuration;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnSurvivorCured_Cosmetic();

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetInteractionTarget() const;

public:
	UK29UseInfectionRemoverInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK29UseInfectionRemoverInteraction) { return 0; }
