#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ArrayExt.generated.h"

UCLASS()
class SYSTEMUTILITIES_API UArrayExt : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UArrayExt();
};

FORCEINLINE uint32 GetTypeHash(const UArrayExt) { return 0; }
