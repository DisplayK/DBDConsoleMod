#pragma once

#include "CoreMinimal.h"
#include "EAIPressureZoneLevel.h"
#include "EAIGameState.h"
#include "GameStatePressureZoneLevelMapContainer.generated.h"

USTRUCT()
struct FGameStatePressureZoneLevelMapContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TMap<EAIGameState, EAIPressureZoneLevel> Map;

public:
	DBDBOTS_API FGameStatePressureZoneLevelMapContainer();
};

FORCEINLINE uint32 GetTypeHash(const FGameStatePressureZoneLevelMapContainer) { return 0; }
