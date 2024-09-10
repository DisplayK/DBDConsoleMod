#pragma once

#include "CoreMinimal.h"
#include "KillerStatusData.h"
#include "K29StatusData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UK29StatusData : public UKillerStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InfectionPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInfected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInfectionActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInfectionCritical;

public:
	UK29StatusData();
};

FORCEINLINE uint32 GetTypeHash(const UK29StatusData) { return 0; }
