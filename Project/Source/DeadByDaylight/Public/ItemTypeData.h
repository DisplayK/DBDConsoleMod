#pragma once

#include "CoreMinimal.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "ELoadoutItemType.h"
#include "ItemTypeData.generated.h"

USTRUCT()
struct FItemTypeData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	ELoadoutItemType ItemType;

	UPROPERTY(EditAnywhere)
	FItemUIData UIData;

public:
	DEADBYDAYLIGHT_API FItemTypeData();
};

FORCEINLINE uint32 GetTypeHash(const FItemTypeData) { return 0; }
