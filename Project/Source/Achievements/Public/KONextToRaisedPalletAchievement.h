#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "KONextToRaisedPalletAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UKONextToRaisedPalletAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UKONextToRaisedPalletAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UKONextToRaisedPalletAchievement) { return 0; }
