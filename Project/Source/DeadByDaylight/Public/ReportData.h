#pragma once

#include "CoreMinimal.h"
#include "ReportData.generated.h"

USTRUCT()
struct FReportData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Type;

	UPROPERTY()
	FString Reason;

	UPROPERTY()
	FString Comment;

public:
	DEADBYDAYLIGHT_API FReportData();
};

FORCEINLINE uint32 GetTypeHash(const FReportData) { return 0; }
