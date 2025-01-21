#pragma once

#include "CoreMinimal.h"
#include "EGestureID.h"
#include "InteractionDefinition.h"
#include "GestureInteractionDefinition.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGestureInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	EGestureID _gestureID;

public:
	UGestureInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UGestureInteractionDefinition) { return 0; }
