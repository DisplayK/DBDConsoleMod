#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MatchConfigTabData.h"
#include "ECustomMatchTab.h"
#include "MatchConfigTabsDataAsset.generated.h"

UCLASS()
class UMatchConfigTabsDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TMap<ECustomMatchTab, FMatchConfigTabData> Data;

public:
	UMatchConfigTabsDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UMatchConfigTabsDataAsset) { return 0; }
