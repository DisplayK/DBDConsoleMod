#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "IsPlayerPerformingInteraction.generated.h"

class UInteractionDefinition;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated)
	FGameplayTagContainer _interactionSemantics;

private:
	UFUNCTION()
	void UpdateIsTrue(UInteractionDefinition* interactionDefinition);

public:
	UFUNCTION(BlueprintCallable)
	void SetInteractionSemantics(const FGameplayTagContainer& interactionSemantics);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UIsPlayerPerformingInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UIsPlayerPerformingInteraction) { return 0; }
