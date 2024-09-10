#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SnowmanWinterEventComponent.generated.h"

class UStatusEffect;
class USnowmanSpawnPlacementStrategy;
class ASnowman;

UCLASS(meta=(BlueprintSpawnableComponent))
class SNOWMANWINTEREVENT_API USnowmanWinterEventComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _numbSnowmenToSpawnAtStart;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USnowmanSpawnPlacementStrategy> _snowmanSpawnPlacementStrategyClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ASnowman> _snowmanClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _survivorInSnowmanEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _killerInSnowmanEffect;

	UPROPERTY(Transient, Export)
	USnowmanSpawnPlacementStrategy* _snowmanSpawnPlacementStrategy;

	UPROPERTY(Transient)
	TArray<ASnowman*> _snowmen;

private:
	UFUNCTION(Exec)
	void DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds);

	UFUNCTION(Exec)
	void DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds);

	UFUNCTION(Exec)
	void DBD_Winter2021RecalculateSpawnPoints();

	UFUNCTION(Exec)
	void DBD_Winter2021ForceRespawnAllSnowmen();

public:
	USnowmanWinterEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const USnowmanWinterEventComponent) { return 0; }
