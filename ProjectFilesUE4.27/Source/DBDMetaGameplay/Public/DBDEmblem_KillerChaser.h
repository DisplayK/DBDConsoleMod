#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "Templates/SubclassOf.h"
#include "DBDEmblem_KillerChaser.generated.h"

class UDBDRankDesignTunables;
class ADBDPlayer;
class UCurveFloat;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_KillerChaser : public UDBDEmblem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UCurveFloat* _chasePointsByDurationCurve;

	UPROPERTY(Transient)
	TMap<ACamperPlayer*, float> _hookedPlayersPenaltyDelay;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UDBDRankDesignTunables> _rankTunablesClass;

public:
	UFUNCTION()
	void OnChaseStart(ADBDPlayer* chasedPlayer);

public:
	UDBDEmblem_KillerChaser();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_KillerChaser) { return 0; }
