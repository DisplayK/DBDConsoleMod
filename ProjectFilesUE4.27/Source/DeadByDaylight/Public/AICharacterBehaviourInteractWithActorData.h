#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "GameplayTagContainer.h"
#include "ECharacterMovementTypes.h"
#include "AICharacterBehaviourInteractWithActorData.generated.h"

class AActor;

UCLASS(BlueprintType)
class UAICharacterBehaviourInteractWithActorData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	AActor* TargetActor;

	UPROPERTY(Transient)
	ECharacterMovementTypes CharacterMovementType;

	UPROPERTY(Transient)
	bool UsePathfinding;

public:
	UFUNCTION(BlueprintCallable)
	void WatchGameEventTypes(TArray<FGameplayTag> gameEventTypes);

	UFUNCTION(BlueprintCallable)
	void WatchGameEventType(FGameplayTag gameEventType);

	UFUNCTION(BlueprintCallable)
	void Init(AActor* actor, ECharacterMovementTypes characterMovementTypeNew, bool usePathfindingNew);

public:
	UAICharacterBehaviourInteractWithActorData();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterBehaviourInteractWithActorData) { return 0; }
