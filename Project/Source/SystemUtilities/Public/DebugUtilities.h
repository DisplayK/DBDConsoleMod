#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DebugUtilities.generated.h"

UCLASS()
class SYSTEMUTILITIES_API UDebugUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UDebugUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDebugUtilities) { return 0; }
