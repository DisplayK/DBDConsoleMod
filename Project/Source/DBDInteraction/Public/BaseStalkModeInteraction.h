#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BaseStalkModeInteraction.generated.h"

class UStalkerComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UBaseStalkModeInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	UStalkerComponent* GetStalkerComponent() const;

	UFUNCTION(BlueprintPure)
	bool CanStalk() const;

public:
	UBaseStalkModeInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBaseStalkModeInteraction) { return 0; }
