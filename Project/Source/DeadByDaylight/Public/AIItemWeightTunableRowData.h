#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AIItemWeightTunableRowData.generated.h"

USTRUCT()
struct FAIItemWeightTunableRowData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float CountWeight;

	UPROPERTY(EditAnywhere)
	float EnergyWeight;

	UPROPERTY(EditAnywhere)
	float ConditionalWeight;

public:
	DEADBYDAYLIGHT_API FAIItemWeightTunableRowData();
};

FORCEINLINE uint32 GetTypeHash(const FAIItemWeightTunableRowData) { return 0; }
