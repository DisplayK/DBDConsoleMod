#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "K30StatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UK30StatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HuntRemainingPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHuntingSurvivor;

public:
	UK30StatusData();
};

FORCEINLINE uint32 GetTypeHash(const UK30StatusData) { return 0; }
