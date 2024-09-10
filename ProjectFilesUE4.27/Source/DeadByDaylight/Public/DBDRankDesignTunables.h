#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDRankDesignTunables.generated.h"

class UCurveFloat;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDRankDesignTunables : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* UnbrokenTimeAlivePointsCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* EvaderStealthPointsByDistanceWhileKillerNotChasingCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* EvaderStealthPointsByDistanceWhileKillerIsChasingCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* EvaderChasePointsByDurationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* EvaderZAxisDistanceScalingCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* ChaserChasePointsByDurationCurve;

public:
	UDBDRankDesignTunables();
};

FORCEINLINE uint32 GetTypeHash(const UDBDRankDesignTunables) { return 0; }
