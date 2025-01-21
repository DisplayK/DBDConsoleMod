#pragma once

#include "CoreMinimal.h"
#include "FreeToPlayData.generated.h"

USTRUCT()
struct FFreeToPlayData
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FString Start;

	UPROPERTY()
	FString End;

public:
	DEADBYDAYLIGHT_API FFreeToPlayData();
};

FORCEINLINE uint32 GetTypeHash(const FFreeToPlayData) { return 0; }
