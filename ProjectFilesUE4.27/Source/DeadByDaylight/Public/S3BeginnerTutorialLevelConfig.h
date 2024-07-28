#pragma once

#include "CoreMinimal.h"
#include "S3BeginnerTutorialLevelConfig.generated.h"

USTRUCT()
struct FS3BeginnerTutorialLevelConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 LevelToHideTutorial;

	UPROPERTY()
	int32 PrestigeToHideTutorial;

public:
	DEADBYDAYLIGHT_API FS3BeginnerTutorialLevelConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3BeginnerTutorialLevelConfig) { return 0; }
