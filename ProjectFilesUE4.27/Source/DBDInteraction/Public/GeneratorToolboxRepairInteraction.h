#pragma once

#include "CoreMinimal.h"
#include "GeneratorRepairInteraction.h"
#include "DBDTunableRowHandle.h"
#include "GeneratorToolboxRepairInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UGeneratorToolboxRepairInteraction : public UGeneratorRepairInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FText _interactionTextWhenEmpty;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _repairSkillCheckDurationWhenEmpty;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _repairSkillCheckChanceWhenEmpty;

public:
	UFUNCTION(BlueprintPure)
	bool HasChargedToolBox(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintPure)
	FString GetInteractionTextWhenEmpty() const;

public:
	UGeneratorToolboxRepairInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorToolboxRepairInteraction) { return 0; }
