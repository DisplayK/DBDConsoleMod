#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ELoadoutSlot.h"
#include "LoadoutSlotUnlockLevelValue.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutSlotUnlockLevelValue: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ELoadoutSlot LoadoutSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodwebLevel;

public:
	DEADBYDAYLIGHT_API FLoadoutSlotUnlockLevelValue();
};

FORCEINLINE uint32 GetTypeHash(const FLoadoutSlotUnlockLevelValue) { return 0; }
