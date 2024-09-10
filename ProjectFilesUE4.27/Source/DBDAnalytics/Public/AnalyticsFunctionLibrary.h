#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnalyticsFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class UAnalyticsFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void IncrementHookSpawned();

public:
	UAnalyticsFunctionLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UAnalyticsFunctionLibrary) { return 0; }
