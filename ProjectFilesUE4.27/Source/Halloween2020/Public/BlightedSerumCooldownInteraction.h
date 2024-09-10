#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BlightedSerumCooldownInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2020_API UBlightedSerumCooldownInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _cooldownTime;

	UPROPERTY(EditDefaultsOnly)
	float _cameraPitchRecenterTime;

public:
	UBlightedSerumCooldownInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBlightedSerumCooldownInteraction) { return 0; }
