#pragma once

#include "CoreMinimal.h"
#include "ConsentDefinitionData.generated.h"

USTRUCT()
struct FConsentDefinitionData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	TArray<FString> Platform;

	UPROPERTY()
	TArray<FString> Sku;

	UPROPERTY(SkipSerialization)
	bool Sku_IsSet;

	UPROPERTY()
	TArray<FString> Language;

	UPROPERTY()
	bool NeedAcceptance;

public:
	DEADBYDAYLIGHT_API FConsentDefinitionData();
};

FORCEINLINE uint32 GetTypeHash(const FConsentDefinitionData) { return 0; }
