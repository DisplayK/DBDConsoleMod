#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "LoadingImagesHintInfo.generated.h"

USTRUCT()
struct FLoadingImagesHintInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FText Title;

	UPROPERTY(Transient)
	FText Description;

	UPROPERTY(Transient)
	FSlateBrush Icon;

	UPROPERTY(Transient)
	bool IsAvailableForKiller;

	UPROPERTY(Transient)
	bool IsAvailableForSurvivor;

public:
	DYNAMICCONTENT_API FLoadingImagesHintInfo();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingImagesHintInfo) { return 0; }
