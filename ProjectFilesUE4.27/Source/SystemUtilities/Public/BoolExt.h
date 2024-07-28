#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BoolExt.generated.h"

UCLASS(BlueprintType)
class SYSTEMUTILITIES_API UBoolExt : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static FString ToString(const bool boolToConvert);

public:
	UBoolExt();
};

FORCEINLINE uint32 GetTypeHash(const UBoolExt) { return 0; }
