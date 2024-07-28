#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_Lockbar.generated.h"

UCLASS(EditInlineNew)
class UAISkill_FindInteractable_Lockbar : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float LockerCenterHeightDiffFromActorLocation;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter LockbarMaxDistanceFromCamper;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter LockbarMaxDistanceFromCamperTolerance;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MinLockbarWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MaxLockbarWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter HighLockbarWeightLastSeconds;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MinDistanceToReachMaxLockbarWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter MaxDistanceToReachMinLockbarWeight;

public:
	UAISkill_FindInteractable_Lockbar();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_Lockbar) { return 0; }
