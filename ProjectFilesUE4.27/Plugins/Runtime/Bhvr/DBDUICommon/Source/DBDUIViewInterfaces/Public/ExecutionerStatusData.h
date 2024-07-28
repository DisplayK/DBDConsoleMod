#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "ExecutionerStatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UExecutionerStatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AgonyProgress;

public:
	UExecutionerStatusData();
};

FORCEINLINE uint32 GetTypeHash(const UExecutionerStatusData) { return 0; }
