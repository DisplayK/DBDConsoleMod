#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "S3CommandAnalytics.generated.h"

USTRUCT()
struct FS3CommandAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 RequestContentLength;

	UPROPERTY()
	FString ContentType;

	UPROPERTY()
	float ElapsedTime;

	UPROPERTY()
	FString Status;

	UPROPERTY()
	FString URL;

	UPROPERTY()
	FString Verb;

	UPROPERTY()
	int32 ResponseContentLength;

	UPROPERTY()
	int32 ResponseCode;

	UPROPERTY()
	bool Success;

public:
	DBDANALYTICS_API FS3CommandAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FS3CommandAnalytics) { return 0; }
