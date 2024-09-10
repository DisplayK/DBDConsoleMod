#pragma once

#include "CoreMinimal.h"
#include "AIDisplayDebugInterface.h"
#include "MindFocusObjectEntry.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "WeightedWishedObjectMapContainer.h"
#include "DBDBlackboardComponent.generated.h"

class UObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDBlackboardComponent : public UBlackboardComponent, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<UObject*, FMindFocusObjectEntry> _mindFocusEntries;

	UPROPERTY(Transient)
	TMap<FGameplayTag, FVector> _pinLocations;

	UPROPERTY(Transient)
	TMap<FGameplayTag, UObject*> _pinObjects;

	UPROPERTY(Transient)
	TMap<UObject*, float> _lostMindFocusEntries;

	UPROPERTY(Transient)
	TMap<FGameplayTag, FWeightedWishedObjectMapContainer> _objectWishListMap;

	UPROPERTY(Transient)
	TSet<UObject*> _discoveredObjects;

	UPROPERTY(Transient)
	TSet<UObject*> _intentionValidators;

public:
	UDBDBlackboardComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBlackboardComponent) { return 0; }
