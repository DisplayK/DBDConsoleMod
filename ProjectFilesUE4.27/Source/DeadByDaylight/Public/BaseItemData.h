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
	UPROPERTY(EditAnywhere)
	EInventoryItemType Type;

	UPROPERTY(EditAnywhere)
	FItemUIData UIData;

	UPROPERTY(EditAnywhere)
	FText GenericDisplayName;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<AActor> ItemBlueprint;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UDBDPrimaryDataAsset> AssetData;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString ItemId;

public:
	DEADBYDAYLIGHT_API FBaseItemData();
};

FORCEINLINE uint32 GetTypeHash(const FBaseItemData) { return 0; }
