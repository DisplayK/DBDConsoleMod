#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LoudNoiseUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ULoudNoiseUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	ULoudNoiseUtilities();
};

FORCEINLINE uint32 GetTypeHash(const ULoudNoiseUtilities) { return 0; }
