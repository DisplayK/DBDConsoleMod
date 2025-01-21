#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "StartGameAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UStartGameAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UStartGameAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UStartGameAchievement) { return 0; }
