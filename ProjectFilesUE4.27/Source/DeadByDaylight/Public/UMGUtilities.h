#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UMGUtilities.generated.h"

UCLASS()
class UUMGUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UUMGUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UUMGUtilities) { return 0; }
