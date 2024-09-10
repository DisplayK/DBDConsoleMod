#pragma once

#include "CoreMinimal.h"
#include "OnGameEventAchievement.h"
#include "MaxBloodpointsAllCategoriesAchievement.generated.h"

UCLASS()
class ACHIEVEMENTS_API UMaxBloodpointsAllCategoriesAchievement : public UOnGameEventAchievement
{
	GENERATED_BODY()

public:
	UMaxBloodpointsAllCategoriesAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UMaxBloodpointsAllCategoriesAchievement) { return 0; }
