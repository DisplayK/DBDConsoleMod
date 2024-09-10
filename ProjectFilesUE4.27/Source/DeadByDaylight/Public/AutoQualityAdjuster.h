#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AutoQualityAdjuster.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AAutoQualityAdjuster : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float TargetResolutionScale;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MinimumMS;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MaximumMS;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ScaleIncreaseRate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float ScaleDecreaseRate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MinimumAllowableScale;

public:
	AAutoQualityAdjuster();
};

FORCEINLINE uint32 GetTypeHash(const AAutoQualityAdjuster) { return 0; }
