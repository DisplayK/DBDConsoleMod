#pragma once

#include "CoreMinimal.h"
#include "BHVRAnalytics.h"
#include "DBDAnalytics.generated.h"

UCLASS(BlueprintType)
class UDBDAnalytics : public UBHVRAnalytics
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void RecordGameProgress(const FString& InProgressType);

public:
	UDBDAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAnalytics) { return 0; }
