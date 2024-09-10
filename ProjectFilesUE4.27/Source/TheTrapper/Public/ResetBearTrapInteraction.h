#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "ResetBearTrapInteraction.generated.h"

class UAnimSequence;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UResetBearTrapInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FName _enterMontageIDForBeartrap;

	UPROPERTY(EditDefaultsOnly)
	FName _udpateMontageIDForBeartrap;

	UPROPERTY(EditDefaultsOnly)
	UAnimSequence* _updateSequenceForBeartrap;

	UPROPERTY(EditDefaultsOnly)
	FName _exitMontageForIDBeartrap;

	UPROPERTY(EditDefaultsOnly)
	FName _cancelExitMontage;

public:
	UResetBearTrapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UResetBearTrapInteraction) { return 0; }
