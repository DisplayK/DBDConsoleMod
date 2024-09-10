#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AchievementBase.generated.h"

UCLASS(Abstract)
class ACHIEVEMENTS_API UAchievementBase : public UObject
{
	GENERATED_BODY()

public:
	UAchievementBase();
};

FORCEINLINE uint32 GetTypeHash(const UAchievementBase) { return 0; }
