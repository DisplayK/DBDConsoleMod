#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EmblemRankUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UEmblemRankUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UEmblemRankUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UEmblemRankUtilities) { return 0; }
