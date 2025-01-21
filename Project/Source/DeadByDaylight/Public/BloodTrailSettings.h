#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
#include "PerPlatformProperties.h"
#include "BloodTrailSettings.generated.h"

class UBloodDecalEffect;

UCLASS()
class UBloodTrailSettings : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float _initialDelay;

	UPROPERTY(EditDefaultsOnly)
	int32 _numBloodDropsPerBloodPool;

	UPROPERTY(EditDefaultsOnly)
	float _bloodDropsInterval;

	UPROPERTY(EditDefaultsOnly)
	bool _randomlyRotateBloodDrops;

	UPROPERTY(EditDefaultsOnly)
	float _bloodDropsRandomScatter;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<ETraceTypeQuery> _bloodTraceChannel;

	UPROPERTY(EditDefaultsOnly)
	UBloodDecalEffect* _bloodDecalEffect;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformInt _decalPoolSize;

	UPROPERTY(EditAnywhere)
	float _recycleThresholdPercentage;

	UPROPERTY(EditAnywhere)
	float _recycleDistancePercentage;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformInt _maxOverlapping;

public:
	UBloodTrailSettings();
};

FORCEINLINE uint32 GetTypeHash(const UBloodTrailSettings) { return 0; }
