#pragma once

#include "CoreMinimal.h"
#include "EInputInteractionType.h"
#include "InteractionPlayerProperties.h"
#include "StoredInteraction.generated.h"

class UInteractionDefinition;

USTRUCT(BlueprintType)
struct FStoredInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TWeakObjectPtr<UInteractionDefinition> _interaction;

	UPROPERTY(Transient)
	EInputInteractionType _inputType;

	UPROPERTY(Transient)
	FInteractionPlayerProperties _playerProperties;

public:
	DEADBYDAYLIGHT_API FStoredInteraction();
};

FORCEINLINE uint32 GetTypeHash(const FStoredInteraction) { return 0; }
