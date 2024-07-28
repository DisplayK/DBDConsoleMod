#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LoadingUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ULoadingUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	ULoadingUtilities();
};

FORCEINLINE uint32 GetTypeHash(const ULoadingUtilities) { return 0; }
