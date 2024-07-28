#pragma once

#include "CoreMinimal.h"
#include "InteractionArray.generated.h"

class UInteractionDefinition;

USTRUCT(BlueprintType)
struct FInteractionArray
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	TArray<TWeakObjectPtr<UInteractionDefinition>> _interactions;

public:
	DEADBYDAYLIGHT_API FInteractionArray();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionArray) { return 0; }
