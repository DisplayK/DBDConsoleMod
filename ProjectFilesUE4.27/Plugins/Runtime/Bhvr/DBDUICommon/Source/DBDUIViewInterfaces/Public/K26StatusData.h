#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "K26StatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UK26StatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCrowAttached;

public:
	UK26StatusData();
};

FORCEINLINE uint32 GetTypeHash(const UK26StatusData) { return 0; }
