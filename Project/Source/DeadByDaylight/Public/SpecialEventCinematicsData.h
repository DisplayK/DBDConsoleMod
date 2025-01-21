#pragma once

#include "CoreMinimal.h"
#include "SpecialEventCinematic.h"
#include "SpecialEventCinematicsData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventCinematicsData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSpecialEventCinematic Intro;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSpecialEventCinematic Outro;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float OutroTimespanInHours;

public:
	DEADBYDAYLIGHT_API FSpecialEventCinematicsData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventCinematicsData) { return 0; }
