#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "BloodwebMandatoryContentByLevel.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebMandatoryContentByLevel: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ForcedItem01;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ForcedItem02;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ForcedItem03;

public:
	DEADBYDAYLIGHT_API FBloodwebMandatoryContentByLevel();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebMandatoryContentByLevel) { return 0; }
