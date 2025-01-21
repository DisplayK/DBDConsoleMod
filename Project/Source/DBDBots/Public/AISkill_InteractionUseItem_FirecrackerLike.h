#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AISkill_InteractionUseItem.h"
#include "AISkill_InteractionUseItem_FirecrackerLike.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_InteractionUseItem_FirecrackerLike : public UAISkill_InteractionUseItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter StartMaxRange;

	UPROPERTY(EditDefaultsOnly)
	float TargetFaceMeMaxAngle;

public:
	UAISkill_InteractionUseItem_FirecrackerLike();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_FirecrackerLike) { return 0; }
