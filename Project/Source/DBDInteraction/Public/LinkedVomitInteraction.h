#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "LinkedVomitInteraction.generated.h"

class UVomitStateComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class ULinkedVomitInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	bool IsVomiting() const;

	UFUNCTION(BlueprintPure)
	UVomitStateComponent* GetVomitStateComponent() const;

public:
	ULinkedVomitInteraction();
};

FORCEINLINE uint32 GetTypeHash(const ULinkedVomitInteraction) { return 0; }
