#pragma once

#include "CoreMinimal.h"
#include "WeightedElement.h"
#include "SpawnElement.h"
#include "ActorSpawnedDelegate.h"
#include "ActorSpawnerProperties.h"
#include "EGameplayElementType.h"
#include "Components/SceneComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "ActorSpawner.generated.h"

class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorSpawner : public USceneComponent, public IWeightedElement, public ISpawnElement
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameplayElementType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> Visualization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ActivatedByDefault;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FActorSpawnerProperties> ActivatedSceneElement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FActorSpawnerProperties> DeactivatedSceneElement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnCountMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnPriorityTier;

	UPROPERTY(BlueprintAssignable)
	FActorSpawnedDelegate OnAsyncActorSpawned;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool WeightInfluenceable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool WeightInfluencer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float Cost;

	UPROPERTY(Transient)
	UClass* _toSpawn;

	UPROPERTY(Transient)
	TWeakObjectPtr<AActor> _spawnedActorOnAuthority;

public:
	UFUNCTION(BlueprintPure)
	bool UseActivatedElement() const;

	UFUNCTION(BlueprintPure)
	bool IsEnabled() const;

	UFUNCTION(BlueprintCallable)
	void EditorForceSpawnVisualization();

	UFUNCTION(BlueprintCallable)
	void AuthoritySelect(bool selected);

	UFUNCTION(BlueprintPure)
	AActor* AuthorityGetSpawnedActor() const;

	UFUNCTION(BlueprintCallable)
	void Authority_SpawnActorAsyncEvent();

public:
	UActorSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UActorSpawner) { return 0; }
