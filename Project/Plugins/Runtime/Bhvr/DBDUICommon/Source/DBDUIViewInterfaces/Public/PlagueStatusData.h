#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "ESicknessLevel.h"
#include "PlagueStatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UPlagueStatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESicknessLevel SicknessLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SicknessProgress;

public:
	UPlagueStatusData();
};

FORCEINLINE uint32 GetTypeHash(const UPlagueStatusData) { return 0; }
