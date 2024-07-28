#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "DBDTunableRowHandle.h"
#include "AISkill_FindInteractable_CrushTwin.generated.h"

UCLASS(EditInlineNew)
class THETWINS_API UAISkill_FindInteractable_CrushTwin : public UAISkill_FindInteractable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter _crushVictorGoalWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter _recoveringTimeEstimationErrorMin;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter _recoveringTimeEstimationErrorMax;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _destroyTwinMaxCharge;

public:
	UAISkill_FindInteractable_CrushTwin();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_CrushTwin) { return 0; }
