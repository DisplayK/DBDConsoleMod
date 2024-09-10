#pragma once

#include "CoreMinimal.h"
#include "XpBonusData.generated.h"

USTRUCT(BlueprintType)
struct FXpBonusData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FString Name;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 XpValue;

public:
	DEADBYDAYLIGHT_API FXpBonusData();
};

FORCEINLINE uint32 GetTypeHash(const FXpBonusData) { return 0; }
