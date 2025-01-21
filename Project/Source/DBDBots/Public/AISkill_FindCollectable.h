#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AISkill_FindCollectable.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindCollectable : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	int32 CollectUnderItemCount;

	UPROPERTY(EditDefaultsOnly)
	float CollectOverItemChargeRatio;

public:
	UAISkill_FindCollectable();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindCollectable) { return 0; }
