#pragma once

#include "CoreMinimal.h"
#include "ParameterizerSettings.generated.h"

USTRUCT(BlueprintType)
struct FParameterizerSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxStretch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LargeChartsImportance;

public:
	SIMPLYGONUOBJECTS_API FParameterizerSettings();
};

FORCEINLINE uint32 GetTypeHash(const FParameterizerSettings) { return 0; }
