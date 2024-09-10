#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "LoadingInfoData.h"
#include "LoadingImagesData.generated.h"

class UPaperSprite;

USTRUCT()
struct FLoadingImagesData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName ID;

	UPROPERTY(EditAnywhere)
	TArray<TSoftObjectPtr<UPaperSprite>> Images;

	UPROPERTY(EditAnywhere)
	TArray<FLoadingInfoData> InfoData;

	UPROPERTY(EditAnywhere)
	bool IsAvailableForSurvivor;

	UPROPERTY(EditAnywhere)
	bool IsAvailableForKiller;

	UPROPERTY(EditAnywhere)
	bool IsGenericImages;

public:
	DEADBYDAYLIGHT_API FLoadingImagesData();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingImagesData) { return 0; }
