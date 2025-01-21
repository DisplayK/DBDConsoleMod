#pragma once

#include "CoreMinimal.h"
#include "MenuFlowButtonPressData.generated.h"

USTRUCT()
struct FMenuFlowButtonPressData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Button;

	UPROPERTY()
	FString ButtonPressTimestamp;

public:
	DBDANALYTICS_API FMenuFlowButtonPressData();
};

FORCEINLINE uint32 GetTypeHash(const FMenuFlowButtonPressData) { return 0; }
