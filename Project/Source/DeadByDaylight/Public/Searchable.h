#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "ContainsItemInterface.h"
#include "EItemRarity.h"
#include "Searchable.generated.h"

class UPrimitiveComponent;
class ADBDPlayer;
class ACollectable;
class USearchableSpawnPoint;

UCLASS()
class DEADBYDAYLIGHT_API ASearchable : public AInteractable, public IAIInteractableTargetInterface, public IContainsItemInterface
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSearchedChanged, bool, searched);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity ItemRarity;

	UPROPERTY(BlueprintAssignable)
	FOnSearchedChanged OnSearchedChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSecret;

private:
	UPROPERTY(Export)
	USearchableSpawnPoint* _searchableSpawnPoint;

	UPROPERTY(EditInstanceOnly)
	FName _itemIdToSpawn;

	UPROPERTY()
	bool _hasBeenSearched;

	UPROPERTY(Transient)
	ACollectable* _spawnedItem;

	UPROPERTY(Replicated, Transient)
	ACollectable* _itemInsideSearchable;

	UPROPERTY(Transient)
	TMap<ADBDPlayer*, uint8> _numberOfSearchesWhileOpenPerPlayer;

public:
	UFUNCTION(BlueprintCallable)
	void SetHasBeenSearched(bool newHasBeenSearched);

	UFUNCTION(BlueprintPure)
	bool HasBeenSearched() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UPrimitiveComponent* GetInteractorPrimitiveComponent() const;

	UFUNCTION()
	bool ContainsSpawnedItem() const;

	UFUNCTION(BlueprintCallable)
	ACollectable* Authority_SpawnObject(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASearchable();
};

FORCEINLINE uint32 GetTypeHash(const ASearchable) { return 0; }
