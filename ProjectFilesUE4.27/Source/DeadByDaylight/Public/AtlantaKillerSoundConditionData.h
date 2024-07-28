#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EKillerSoundComparisonType.h"
#include "AtlantaKillerSoundConditionData.generated.h"

USTRUCT()
struct FAtlantaKillerSoundConditionData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName RTPCAudioID;

	UPROPERTY(EditAnywhere)
	float ComparisonValue;

	UPROPERTY(EditAnywhere)
	EKillerSoundComparisonType ValueComparisonType;

public:
	DEADBYDAYLIGHT_API FAtlantaKillerSoundConditionData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaKillerSoundConditionData) { return 0; }
