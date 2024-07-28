#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ResolutionQualityPair.generated.h"

USTRUCT(BlueprintType)
struct FResolutionQualityPair: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Quality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoAdjust;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScreenScaleForWindowedMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScreenResolution;

public:
	DEADBYDAYLIGHT_API FResolutionQualityPair();
};

FORCEINLINE uint32 GetTypeHash(const FResolutionQualityPair) { return 0; }
