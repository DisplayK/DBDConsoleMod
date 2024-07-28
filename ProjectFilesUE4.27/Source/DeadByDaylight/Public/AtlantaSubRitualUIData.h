#pragma once

#include "CoreMinimal.h"
#include "AtlantaSubRitualUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaSubRitualUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FString Description;

	UPROPERTY(BlueprintReadOnly)
	int32 TargetNumber;

	UPROPERTY(BlueprintReadOnly)
	int32 CurrentNumber;

public:
	DEADBYDAYLIGHT_API FAtlantaSubRitualUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaSubRitualUIData) { return 0; }
