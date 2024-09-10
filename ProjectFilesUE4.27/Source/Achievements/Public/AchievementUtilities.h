#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AchievementUtilities.generated.h"

UCLASS()
class ACHIEVEMENTS_API UAchievementUtilities : public UObject
{
	GENERATED_BODY()

public:
	UAchievementUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UAchievementUtilities) { return 0; }
