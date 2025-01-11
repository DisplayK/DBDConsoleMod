#pragma once

#include "CoreMinimal.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "EInventoryItemType.h"
#include "BaseItemData.generated.h"

class AActor;
class UDBDPrimaryDataAsset;

USTRUCT(BlueprintType)
struct FBaseItemData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EInventoryItemType Type;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FItemUIData UIData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText GenericDisplayName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftClassPtr<AActor> ItemBlueprint;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UDBDPrimaryDataAsset> AssetData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString ItemId;

public:
	DEADBYDAYLIGHT_API FBaseItemData();
};

FORCEINLINE uint32 GetTypeHash(const FBaseItemData) { return 0; }
