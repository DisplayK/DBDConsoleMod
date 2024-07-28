#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UIUtilities.generated.h"

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UUIUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void ConvertArchiveCurrentAndMaxProgressionInPercentage(int32& outCurrentProgression, int32& outMaxProgression);

public:
	UUIUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UUIUtilities) { return 0; }
