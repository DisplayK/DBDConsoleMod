#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BlightedSerumCollisionInteraction.generated.h"

class UBlightedSerumCooldownInteraction;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2020_API UBlightedSerumCollisionInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UBlightedSerumCooldownInteraction* _cooldownInteraction;

	UPROPERTY(EditDefaultsOnly)
	float _bounceTime;

public:
	UFUNCTION(BlueprintCallable)
	void SetCooldownInteraction(UBlightedSerumCooldownInteraction* cooldownInteraction);

public:
	UBlightedSerumCollisionInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBlightedSerumCollisionInteraction) { return 0; }
