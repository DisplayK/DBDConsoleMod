#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "AttachReverseBearTrap.generated.h"

class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEPIG_API UAttachReverseBearTrap : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetCamper() const;

public:
	UAttachReverseBearTrap();
};

FORCEINLINE uint32 GetTypeHash(const UAttachReverseBearTrap) { return 0; }
