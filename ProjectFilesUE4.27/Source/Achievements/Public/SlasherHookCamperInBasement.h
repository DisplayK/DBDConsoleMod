#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "SlasherHookCamperInBasement.generated.h"

UCLASS()
class ACHIEVEMENTS_API USlasherHookCamperInBasement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	USlasherHookCamperInBasement();
};

FORCEINLINE uint32 GetTypeHash(const USlasherHookCamperInBasement) { return 0; }
