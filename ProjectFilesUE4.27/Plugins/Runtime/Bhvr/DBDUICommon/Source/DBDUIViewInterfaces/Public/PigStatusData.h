#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "EReverseBearTrapUIState.h"
#include "PigStatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UPigStatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EReverseBearTrapUIState ReverseBearTrapState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimerProgress;

public:
	UPigStatusData();
};

FORCEINLINE uint32 GetTypeHash(const UPigStatusData) { return 0; }
