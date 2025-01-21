#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "SnuffTotem.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USnuffTotem : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _slasherFacingTolerance;

public:
	USnuffTotem();
};

FORCEINLINE uint32 GetTypeHash(const USnuffTotem) { return 0; }
