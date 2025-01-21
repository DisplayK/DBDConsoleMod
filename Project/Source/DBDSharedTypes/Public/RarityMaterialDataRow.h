#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "RarityMaterialData.h"
#include "EItemRarity.h"
#include "RarityMaterialDataRow.generated.h"

USTRUCT()
struct FRarityMaterialDataRow: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere)
	FRarityMaterialData RarityData;

public:
	DBDSHAREDTYPES_API FRarityMaterialDataRow();
};

FORCEINLINE uint32 GetTypeHash(const FRarityMaterialDataRow) { return 0; }
