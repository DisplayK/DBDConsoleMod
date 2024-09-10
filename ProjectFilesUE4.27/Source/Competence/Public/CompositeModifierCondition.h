#pragma once

#include "CoreMinimal.h"
#include "ConditionReceiver.h"
#include "EventDrivenModifierCondition.h"
#include "CompositeModifierCondition.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UCompositeModifierCondition : public UEventDrivenModifierCondition, public IConditionReceiver
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_Conditions, Transient, Export)
	TArray<UEventDrivenModifierCondition*> _conditions;

private:
	UFUNCTION()
	void OnRep_Conditions();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCompositeModifierCondition();
};

FORCEINLINE uint32 GetTypeHash(const UCompositeModifierCondition) { return 0; }
