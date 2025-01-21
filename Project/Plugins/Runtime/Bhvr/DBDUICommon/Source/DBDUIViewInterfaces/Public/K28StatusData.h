#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "K28StatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UK28StatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DayNightCycleProgressPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDaytime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsTransitioningToNighttime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsNighttime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsTransitioningToDaytime;

public:
	UK28StatusData();
};

FORCEINLINE uint32 GetTypeHash(const UK28StatusData) { return 0; }
