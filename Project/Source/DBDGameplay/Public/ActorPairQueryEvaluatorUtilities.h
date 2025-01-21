#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActorPairQueryEvaluatorUtilities.generated.h"

UCLASS()
class DBDGAMEPLAY_API UActorPairQueryEvaluatorUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UActorPairQueryEvaluatorUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UActorPairQueryEvaluatorUtilities) { return 0; }
