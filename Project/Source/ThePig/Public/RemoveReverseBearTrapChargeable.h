#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "RemoveReverseBearTrapChargeable.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEPIG_API URemoveReverseBearTrapChargeable : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _audibleRangeOnSearch;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedRevealStatusEffect;

private:
	UFUNCTION(BlueprintPure)
	bool HasSuccessfullyRemoved() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnFinishWithoutDetach(ACamperPlayer* searchingPlayer);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnFinishWithDetach(ACamperPlayer* searchingPlayer);

public:
	URemoveReverseBearTrapChargeable();
};

FORCEINLINE uint32 GetTypeHash(const URemoveReverseBearTrapChargeable) { return 0; }
