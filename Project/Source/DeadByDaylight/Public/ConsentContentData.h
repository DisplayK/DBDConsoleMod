#pragma once

#include "CoreMinimal.h"
#include "ConsentContentVersionData.h"
#include "ConsentContentData.generated.h"

USTRUCT()
struct FConsentContentData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	TArray<FConsentContentVersionData> Versions;

public:
	DEADBYDAYLIGHT_API FConsentContentData();
};

FORCEINLINE uint32 GetTypeHash(const FConsentContentData) { return 0; }
