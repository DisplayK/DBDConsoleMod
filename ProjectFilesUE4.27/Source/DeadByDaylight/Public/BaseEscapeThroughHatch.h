#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BaseEscapeThroughHatch.generated.h"

class AHatch;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBaseEscapeThroughHatch : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	AHatch* GetHatch() const;

public:
	UBaseEscapeThroughHatch();
};

FORCEINLINE uint32 GetTypeHash(const UBaseEscapeThroughHatch) { return 0; }
