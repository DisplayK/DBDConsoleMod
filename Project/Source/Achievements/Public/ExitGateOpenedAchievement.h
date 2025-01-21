#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "ExitGateOpenedAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UExitGateOpenedAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UExitGateOpenedAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UExitGateOpenedAchievement) { return 0; }
