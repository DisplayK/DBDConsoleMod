#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "TwinsStatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UTwinsStatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TwinsActive;

public:
	UTwinsStatusData();
};

FORCEINLINE uint32 GetTypeHash(const UTwinsStatusData) { return 0; }
