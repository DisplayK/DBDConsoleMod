#pragma once

#include "CoreMinimal.h"
#include "BaseTooltipData.h"
#include "PlayerLevelTooltipData.generated.h"

USTRUCT()
struct FPlayerLevelTooltipData: public FBaseTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	int32 PlayerLevel;

	UPROPERTY(Transient)
	int32 PlayerPrestige;

	UPROPERTY(Transient)
	int32 CurrentExperience;

	UPROPERTY(Transient)
	int32 NextLevelExperience;

public:
	DEADBYDAYLIGHT_API FPlayerLevelTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerLevelTooltipData) { return 0; }
