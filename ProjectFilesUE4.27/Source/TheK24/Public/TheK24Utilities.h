#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TheK24Utilities.generated.h"

UCLASS()
class UTheK24Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UTheK24Utilities();
};

FORCEINLINE uint32 GetTypeHash(const UTheK24Utilities) { return 0; }
