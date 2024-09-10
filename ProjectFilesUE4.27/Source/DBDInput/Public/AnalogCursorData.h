#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EAnalogCursorDataType.h"
#include "AnalogCursorData.generated.h"

USTRUCT(BlueprintType)
struct FAnalogCursorData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAnalogCursorDataType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ScalesWithDPI;

public:
	DBDINPUT_API FAnalogCursorData();
};

FORCEINLINE uint32 GetTypeHash(const FAnalogCursorData) { return 0; }
