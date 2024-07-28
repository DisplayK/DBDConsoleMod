#pragma once

#include "CoreMinimal.h"
#include "BaseStalkModeInteraction.h"
#include "GhostChargeStalkModeInteraction.generated.h"

class UGhostStealthComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGhostChargeStalkModeInteraction : public UBaseStalkModeInteraction
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	UGhostStealthComponent* GetStealthComponent() const;

public:
	UGhostChargeStalkModeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UGhostChargeStalkModeInteraction) { return 0; }
