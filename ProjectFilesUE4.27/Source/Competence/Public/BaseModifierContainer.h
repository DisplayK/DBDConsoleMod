#pragma once

#include "CoreMinimal.h"
#include "ConditionReceiver.h"
#include "Components/ActorComponent.h"
#include "ModifierReplicatedEventConditionData.h"
#include "Templates/SubclassOf.h"
#include "BaseModifierContainer.generated.h"

class UEventDrivenModifierCondition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UBaseModifierContainer : public UActorComponent, public IConditionReceiver
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Replicated)
	FName _id;

private:
	UPROPERTY(ReplicatedUsing=OnRep_EventDrivenConditionData_Internal, Transient)
	FModifierReplicatedEventConditionData _eventDrivenConditionData;

private:
	UFUNCTION()
	void OnRep_EventDrivenConditionData_Internal(const FModifierReplicatedEventConditionData& oldReplicatedCondition);

public:
	UFUNCTION(BlueprintPure)
	bool IsApplicable() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	UEventDrivenModifierCondition* CreateAndSetEventDrivenCondition(TSubclassOf<UEventDrivenModifierCondition> conditionType);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintAuthorityOnly)
	void Authority_OnInstantiateModifierConditions();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBaseModifierContainer();
};

FORCEINLINE uint32 GetTypeHash(const UBaseModifierContainer) { return 0; }
