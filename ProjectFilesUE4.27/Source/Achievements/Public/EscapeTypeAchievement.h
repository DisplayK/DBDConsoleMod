#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "EscapeTypeAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UEscapeTypeAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UEscapeTypeAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UEscapeTypeAchievement) { return 0; }
