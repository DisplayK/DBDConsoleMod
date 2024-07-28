#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CustomAchievementInfo.generated.h"

class UAchievementBase;

USTRUCT(BlueprintType)
struct FCustomAchievementInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UAchievementBase> achievement;

public:
	ACHIEVEMENTS_API FCustomAchievementInfo();
};

FORCEINLINE uint32 GetTypeHash(const FCustomAchievementInfo) { return 0; }
