#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "AIDetectedStimulus.h"
#include "EInteractionTargetRequirements.h"
#include "TargetMoveAwayToFastInfo.h"
#include "EInteractionTargetInSightModes.h"
#include "Templates/SubclassOf.h"
#include "AISkill_InteractionTarget.generated.h"

class AActor;
class UNavigationQueryFilter;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionTarget : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	EInteractionTargetRequirements TargetRequirement;

	UPROPERTY(EditDefaultsOnly)
	bool AutoSwapBestStimulusWithBestTarget;

	UPROPERTY(EditDefaultsOnly)
	float StartMinRange;

	UPROPERTY(EditDefaultsOnly)
	float StartMaxRange;

	UPROPERTY(EditDefaultsOnly)
	float StopMinRange;

	UPROPERTY(EditDefaultsOnly)
	float StopMaxRange;

	UPROPERTY(EditDefaultsOnly)
	float StartMaxHalfAngle;

	UPROPERTY(EditDefaultsOnly)
	float StopMaxHalfAngle;

	UPROPERTY(EditDefaultsOnly)
	bool IsMaxHalfAngle2D;

	UPROPERTY(EditDefaultsOnly)
	bool TestMaxHalfAngleOnPath;

	UPROPERTY(EditInstanceOnly)
	TSubclassOf<UNavigationQueryFilter> MaxAngleFilterClass;

	UPROPERTY(EditDefaultsOnly)
	EInteractionTargetInSightModes InSightMode;

	UPROPERTY(EditDefaultsOnly)
	float OutOfSightModeDelay;

	UPROPERTY(EditDefaultsOnly)
	float TargetMoveAwayTooFastStopDelay;

	UPROPERTY(EditDefaultsOnly)
	float TargetMoveAwayTooFastCooldown;

	UPROPERTY(EditDefaultsOnly)
	bool AlwaysStrafeAroundTarget;

protected:
	UPROPERTY(Transient)
	TArray<FAIDetectedStimulus> _unfilteredTargets;

	UPROPERTY(Transient)
	TArray<FAIDetectedStimulus> _filteredTargets;

private:
	UPROPERTY(Transient)
	TMap<AActor*, FTargetMoveAwayToFastInfo> _targetsMoveAwayTooFastInfo;

public:
	UAISkill_InteractionTarget();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionTarget) { return 0; }
