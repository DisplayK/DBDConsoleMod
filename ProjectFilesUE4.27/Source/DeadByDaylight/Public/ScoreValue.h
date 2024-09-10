#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreCategory.h"
#include "DBDTableRowBase.h"
#include "ScoreValue.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FScoreValue: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDBDScoreCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodpointValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxBloodpointValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* BloodpointDepreciationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OngoingWaitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

public:
	DEADBYDAYLIGHT_API FScoreValue();
};

FORCEINLINE uint32 GetTypeHash(const FScoreValue) { return 0; }
