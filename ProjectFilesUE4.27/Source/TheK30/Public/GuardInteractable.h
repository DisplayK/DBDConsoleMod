#pragma once

#include "CoreMinimal.h"
#include "PlayerInteractable.h"
#include "GuardInteractable.generated.h"

class UInteractionDefinition;

UCLASS()
class AGuardInteractable : public APlayerInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractionDefinition* _startHuntInteraction;

public:
	AGuardInteractable();
};

FORCEINLINE uint32 GetTypeHash(const AGuardInteractable) { return 0; }
