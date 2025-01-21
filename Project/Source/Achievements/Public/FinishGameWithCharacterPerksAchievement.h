#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "FinishGameWithCharacterPerksAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UFinishGameWithCharacterPerksAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UFinishGameWithCharacterPerksAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UFinishGameWithCharacterPerksAchievement) { return 0; }
