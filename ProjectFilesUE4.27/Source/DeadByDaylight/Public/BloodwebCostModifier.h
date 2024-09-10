#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EBloodwebNodeContentType.h"
#include "BloodwebCostModifier.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebCostModifier: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBloodwebNodeContentType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CostModifier;

public:
	DEADBYDAYLIGHT_API FBloodwebCostModifier();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebCostModifier) { return 0; }
