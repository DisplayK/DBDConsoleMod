#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "GhostfaceStatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UGhostfaceStatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsExposed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StalkingProgress;

public:
	UGhostfaceStatusData();
};

FORCEINLINE uint32 GetTypeHash(const UGhostfaceStatusData) { return 0; }
