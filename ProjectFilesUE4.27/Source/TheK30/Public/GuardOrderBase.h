#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "GuardOrderBase.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGuardOrderBase : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	bool _shouldWaitForCurrentInteraction;

	UPROPERTY(EditDefaultsOnly)
	FName _explodeInteractableAnimNotifyID;

public:
	UGuardOrderBase();
};

FORCEINLINE uint32 GetTypeHash(const UGuardOrderBase) { return 0; }
