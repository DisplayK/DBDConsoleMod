#pragma once

#include "CoreMinimal.h"
#include "EPawnInputPressTypes.h"
#include "AISkill.h"
#include "EInteractionSkillInputModes.h"
#include "EInteractionCancelInputModes.h"
#include "AIRoll.h"
#include "AISkill_Interaction.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Interaction : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	EPawnInputPressTypes InputType;

	UPROPERTY(EditDefaultsOnly)
	EInteractionSkillInputModes InputMode;

	UPROPERTY(EditDefaultsOnly)
	EPawnInputPressTypes CancelInputType;

	UPROPERTY(EditDefaultsOnly)
	EInteractionCancelInputModes CancelInputMode;

	UPROPERTY(EditDefaultsOnly)
	bool AutoLockInput;

	UPROPERTY(EditDefaultsOnly)
	FAIRoll StartRoll;

	UPROPERTY(EditDefaultsOnly)
	FString StartInteractionID;

	UPROPERTY(EditDefaultsOnly)
	FString StopInteractionID;

	UPROPERTY(EditDefaultsOnly)
	float MinHoldInputTime;

	UPROPERTY(EditDefaultsOnly)
	bool AutoReleaseHoldInputWhenCharged;

public:
	UAISkill_Interaction();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction) { return 0; }
