#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "SlashedOutOfBearTrapInteraction.generated.h"

class UAnimMontage;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USlashedOutOfBearTrapInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FString> _overridableInteractions;

	UPROPERTY(EditAnywhere)
	UAnimMontage* _updateMontage;

public:
	USlashedOutOfBearTrapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USlashedOutOfBearTrapInteraction) { return 0; }
