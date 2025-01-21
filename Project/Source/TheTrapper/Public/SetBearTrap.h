#pragma once

#include "CoreMinimal.h"
#include "SetTrapInteraction.h"
#include "SetBearTrap.generated.h"

class UAnimSequence;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USetBearTrap : public USetTrapInteraction
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
	USetBearTrap();
};

FORCEINLINE uint32 GetTypeHash(const USetBearTrap) { return 0; }
