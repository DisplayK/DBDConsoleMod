#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoreUtilities.generated.h"

class UObject;
class UGameInstance;

UCLASS(BlueprintType)
class COREUTILITIES_API UCoreUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static TArray<int32> GetRandomValuesFromArray(const TArray<int32>& values, const int32 numberOfDesiredValues);

	UFUNCTION(BlueprintPure)
	static UGameInstance* GetGameInstance(const UObject* worldContextObject);

public:
	UCoreUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCoreUtilities) { return 0; }
