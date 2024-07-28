#pragma once

#include "CoreMinimal.h"
#include "ESpecialEventBloodwebChestCondition.h"
#include "SpecialEventBloodwebData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventBloodwebData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ESpecialEventBloodwebChestCondition EventChestCondition;

public:
	DEADBYDAYLIGHT_API FSpecialEventBloodwebData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventBloodwebData) { return 0; }
