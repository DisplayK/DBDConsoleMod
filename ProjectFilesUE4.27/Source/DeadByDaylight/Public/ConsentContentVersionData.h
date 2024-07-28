#pragma once

#include "CoreMinimal.h"
#include "ConsentContentVersionData.generated.h"

USTRUCT()
struct FConsentContentVersionData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Label;

	UPROPERTY()
	int64 EntryDate;

	UPROPERTY()
	TMap<FString, FString> Title;

	UPROPERTY()
	TMap<FString, FString> Content;

public:
	DEADBYDAYLIGHT_API FConsentContentVersionData();
};

FORCEINLINE uint32 GetTypeHash(const FConsentContentVersionData) { return 0; }
