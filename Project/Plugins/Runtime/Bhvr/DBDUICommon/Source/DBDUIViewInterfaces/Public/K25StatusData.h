#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "K25StatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UK25StatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChainHuntProgressPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsHoldingLamentConfiguration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSolvingLamentConfiguration;

public:
	UK25StatusData();
};

FORCEINLINE uint32 GetTypeHash(const UK25StatusData) { return 0; }
