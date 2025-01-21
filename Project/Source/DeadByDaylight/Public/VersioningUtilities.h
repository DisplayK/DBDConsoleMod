#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VersioningUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UVersioningUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UVersioningUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UVersioningUtilities) { return 0; }
