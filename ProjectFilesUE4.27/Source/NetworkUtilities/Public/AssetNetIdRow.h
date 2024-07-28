#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AssetNetIdRow.generated.h"

USTRUCT()
struct FAssetNetIdRow: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 NetId;

public:
	NETWORKUTILITIES_API FAssetNetIdRow();
};

FORCEINLINE uint32 GetTypeHash(const FAssetNetIdRow) { return 0; }
