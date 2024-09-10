#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "RecallTwin.generated.h"

class AConjoinedTwin;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class URecallTwin : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnTwinSet(AConjoinedTwin* twin);

public:
	URecallTwin();
};

FORCEINLINE uint32 GetTypeHash(const URecallTwin) { return 0; }
