#pragma once

#include "CoreMinimal.h"
#include "DBDFoliageInstance.h"
#include "DBDFoliageInfo.generated.h"

class UFoliageType;

USTRUCT(BlueprintType)
struct FDBDFoliageInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UFoliageType* foliageType;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FDBDFoliageInstance> instances;

public:
	DEADBYDAYLIGHT_API FDBDFoliageInfo();
};

FORCEINLINE uint32 GetTypeHash(const FDBDFoliageInfo) { return 0; }
