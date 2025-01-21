#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "DBDPrimaryDataAsset.generated.h"

UCLASS(BlueprintType, Abstract)
class DEADBYDAYLIGHT_API UDBDPrimaryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FPrimaryAssetType AssetType;

public:
	UDBDPrimaryDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPrimaryDataAsset) { return 0; }
