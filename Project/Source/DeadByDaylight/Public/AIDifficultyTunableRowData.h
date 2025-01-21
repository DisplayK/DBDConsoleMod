#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AIDifficultyTunableRowData.generated.h"

USTRUCT()
struct FAIDifficultyTunableRowData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float VeryEasy;

	UPROPERTY(EditAnywhere)
	float Easy;

	UPROPERTY(EditAnywhere)
	float Medium;

	UPROPERTY(EditAnywhere)
	float Hard;

public:
	DEADBYDAYLIGHT_API FAIDifficultyTunableRowData();
};

FORCEINLINE uint32 GetTypeHash(const FAIDifficultyTunableRowData) { return 0; }
