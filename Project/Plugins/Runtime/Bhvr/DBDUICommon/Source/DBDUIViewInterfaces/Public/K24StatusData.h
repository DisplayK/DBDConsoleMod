#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "K24StatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UK24StatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsContaminated;

public:
	UK24StatusData();
};

FORCEINLINE uint32 GetTypeHash(const UK24StatusData) { return 0; }
