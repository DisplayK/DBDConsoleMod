#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "Templates/SubclassOf.h"
#include "DBDEmblem_SurvivorUnbroken.generated.h"

class UDBDRankDesignTunables;
class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDBDEmblem_SurvivorUnbroken : public UDBDEmblem
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UCurveFloat* _pointsForTimeAlive;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UDBDRankDesignTunables> _rankTunablesClass;

private:
	UFUNCTION()
	void OnIntroCompleted();

public:
	UDBDEmblem_SurvivorUnbroken();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_SurvivorUnbroken) { return 0; }
