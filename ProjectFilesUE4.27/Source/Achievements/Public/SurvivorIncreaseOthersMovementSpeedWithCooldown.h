#pragma once

#include "CoreMinimal.h"
#include "CooldownReactivationTypeAchievement.h"
#include "SurvivorIncreaseOthersMovementSpeedWithCooldown.generated.h"

UCLASS()
class ACHIEVEMENTS_API USurvivorIncreaseOthersMovementSpeedWithCooldown : public UCooldownReactivationTypeAchievement
{
	GENERATED_BODY()

public:
	USurvivorIncreaseOthersMovementSpeedWithCooldown();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorIncreaseOthersMovementSpeedWithCooldown) { return 0; }
