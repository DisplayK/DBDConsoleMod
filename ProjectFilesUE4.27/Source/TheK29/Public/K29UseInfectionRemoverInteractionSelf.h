#pragma once

#include "CoreMinimal.h"
#include "K29UseInfectionRemoverInteraction.h"
#include "K29UseInfectionRemoverInteractionSelf.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29UseInfectionRemoverInteractionSelf : public UK29UseInfectionRemoverInteraction
{
	GENERATED_BODY()

public:
	UK29UseInfectionRemoverInteractionSelf();
};

FORCEINLINE uint32 GetTypeHash(const UK29UseInfectionRemoverInteractionSelf) { return 0; }
