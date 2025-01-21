#pragma once

#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "SpawnElement.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "UObject/SoftObjectPtr.h"
#include "ETileSpawnPointType.h"
#include "TileSpawnPoint.generated.h"

class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTileSpawnPoint : public USceneComponent, public IWeightedElement, public ISpawnElement
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETileSpawnPointType TileSpawnPointType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> Visualization;

protected:
	UPROPERTY(ReplicatedUsing=OnRep_SpawnObject, Transient)
	AActor* _spawnedObject;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<AActor>> ObjectSpawnModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _spawnPriorityTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _weightInfluenceable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _weightInfluencer;

	UPROPERTY(Transient)
	bool _activated;

public:
	UFUNCTION(BlueprintCallable)
	void SetActivated(bool activated);

protected:
	UFUNCTION()
	void OnRep_SpawnObject();

public:
	UFUNCTION(BlueprintPure)
	bool IsActivated() const;

	UFUNCTION(BlueprintPure)
	AActor* GetSpawnedObject() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTileSpawnPoint();
};

FORCEINLINE uint32 GetTypeHash(const UTileSpawnPoint) { return 0; }
