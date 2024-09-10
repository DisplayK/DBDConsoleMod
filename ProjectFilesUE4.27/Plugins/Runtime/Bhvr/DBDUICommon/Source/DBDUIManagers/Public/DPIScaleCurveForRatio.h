#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EDPIScaleCurveRatio.h"
#include "UObject/SoftObjectPtr.h"
#include "DPIScaleCurveForRatio.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FDPIScaleCurveForRatio: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDPIScaleCurveRatio Ratio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UCurveFloat> DPIScaleCurve;

public:
	DBDUIMANAGERS_API FDPIScaleCurveForRatio();
};

FORCEINLINE uint32 GetTypeHash(const FDPIScaleCurveForRatio) { return 0; }
