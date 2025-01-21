#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "Templates/SubclassOf.h"
#include "DBDEmblem_SurvivorEvader.generated.h"

class UDBDRankDesignTunables;
class ADBDPlayer;
class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_SurvivorEvader : public UDBDEmblem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UCurveFloat* _killerDistanceStealthPointCurve;

	UPROPERTY(Transient)
	UCurveFloat* _killerDistanceStealthPointCurveChasing;

	UPROPERTY(Transient)
	UCurveFloat* _chaseDurationPointCurve;

	UPROPERTY(Transient)
	UCurveFloat* _ZAxisDistanceScalingCurve;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UDBDRankDesignTunables> _rankTunablesClass;

public:
	UFUNCTION()
	void OnChaseStartEvent(ADBDPlayer* chasedPlayer);

public:
	UDBDEmblem_SurvivorEvader();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_SurvivorEvader) { return 0; }
