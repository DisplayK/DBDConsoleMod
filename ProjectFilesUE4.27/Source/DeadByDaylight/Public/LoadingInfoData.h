#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "LoadingInfoData.generated.h"

class UTexture2D;

USTRUCT()
struct FLoadingInfoData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FText Title;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere)
	bool IsAvailableForKiller;

	UPROPERTY(EditAnywhere)
	bool IsAvailableForSurvivor;

public:
	DEADBYDAYLIGHT_API FLoadingInfoData();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingInfoData) { return 0; }
