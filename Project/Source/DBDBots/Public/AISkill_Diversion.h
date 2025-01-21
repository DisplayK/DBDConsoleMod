#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "EAIDifficultyLevel.h"
#include "AISkill_Diversion.generated.h"

class AActor;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Diversion : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FName PerkId;

	UPROPERTY(EditInstanceOnly)
	TArray<TSubclassOf<AActor>> DiversionFromGoalClasses;

	UPROPERTY(EditInstanceOnly)
	EAIDifficultyLevel ThrowOnInteractablesAtDifficultyLevel;

	UPROPERTY(EditInstanceOnly)
	float MaxThrowOnInteractableHalfAngle;

	UPROPERTY(EditInstanceOnly)
	float MaxMoveToTargetDistance;

	UPROPERTY(EditInstanceOnly)
	FVector NavMeshFindLocationExtents;

	UPROPERTY(EditDefaultsOnly)
	float PlanInterval;

public:
	UAISkill_Diversion();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Diversion) { return 0; }
