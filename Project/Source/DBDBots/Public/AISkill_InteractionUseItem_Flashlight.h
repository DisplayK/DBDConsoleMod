#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem.h"
#include "AIRoll.h"
#include "AISkill_InteractionUseItem_Flashlight.generated.h"

class AActor;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionUseItem_Flashlight : public UAISkill_InteractionUseItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAIRoll VulnerableTargetStartRoll;

	UPROPERTY(EditDefaultsOnly)
	float TargetFaceMeMaxAngle;

private:
	UPROPERTY(Transient)
	AActor* _targetActor;

public:
	UAISkill_InteractionUseItem_Flashlight();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_Flashlight) { return 0; }
