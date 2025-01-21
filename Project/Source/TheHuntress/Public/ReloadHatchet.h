#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "ReloadHatchet.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEHUNTRESS_API UReloadHatchet : public UBaseLockerInteraction
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	bool IsInteractionPossible_Shared(const ADBDPlayer* player) const;

public:
	UReloadHatchet();
};

FORCEINLINE uint32 GetTypeHash(const UReloadHatchet) { return 0; }
