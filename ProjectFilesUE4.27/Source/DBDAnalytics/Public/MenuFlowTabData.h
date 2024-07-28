#pragma once

#include "CoreMinimal.h"
#include "MenuFlowTabData.generated.h"

USTRUCT()
struct FMenuFlowTabData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString CurrentTab;

	UPROPERTY()
	FString PreviousTab;

	UPROPERTY()
	float TimeOnPreviousTab;

	UPROPERTY()
	FString TabChangeTimestamp;

public:
	DBDANALYTICS_API FMenuFlowTabData();
};

FORCEINLINE uint32 GetTypeHash(const FMenuFlowTabData) { return 0; }
