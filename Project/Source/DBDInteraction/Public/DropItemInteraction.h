#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DropItemInteraction.generated.h"

class ACollectable;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UDropItemInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	ACollectable* GetItem() const;

public:
	UDropItemInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDropItemInteraction) { return 0; }
