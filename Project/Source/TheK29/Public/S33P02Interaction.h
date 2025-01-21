#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "S33P02Interaction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class US33P02Interaction : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	US33P02Interaction();
};

FORCEINLINE uint32 GetTypeHash(const US33P02Interaction) { return 0; }
