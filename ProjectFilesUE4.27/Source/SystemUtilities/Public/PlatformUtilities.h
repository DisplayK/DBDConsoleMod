#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlatformUtilities.generated.h"

UCLASS(BlueprintType)
class SYSTEMUTILITIES_API UPlatformUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static FString GetPlatform();

public:
	UPlatformUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UPlatformUtilities) { return 0; }
