#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "CooldownReactivationTypeAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UCooldownReactivationTypeAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UCooldownReactivationTypeAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UCooldownReactivationTypeAchievement) { return 0; }
