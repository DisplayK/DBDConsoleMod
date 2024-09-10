#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "KillerVaultDuringChaseAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UKillerVaultDuringChaseAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UKillerVaultDuringChaseAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UKillerVaultDuringChaseAchievement) { return 0; }
