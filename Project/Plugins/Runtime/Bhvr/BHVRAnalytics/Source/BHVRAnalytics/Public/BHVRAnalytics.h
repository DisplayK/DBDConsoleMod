#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BHVRAnalytics.generated.h"

UCLASS()
class BHVRANALYTICS_API UBHVRAnalytics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UBHVRAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const UBHVRAnalytics) { return 0; }
