#pragma once

#include "CoreMinimal.h"
#include "ESleepingUIState.h"
#include "KillerStatusData.h"
#include "NightmareStatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UNightmareStatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESleepingUIState SleepingState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SleepingProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SleepProtectionRemainingDuration;

public:
	UNightmareStatusData();
};

FORCEINLINE uint32 GetTypeHash(const UNightmareStatusData) { return 0; }
