#pragma once

#include "CoreMinimal.h"
#include "DownloadProgression.generated.h"

USTRUCT(BlueprintType)
struct FDownloadProgression
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float DownloadSize;

	UPROPERTY()
	float TotalDownloadedSize;

	UPROPERTY()
	float DownloadSpeed;

	UPROPERTY()
	float InstallProgress;

	UPROPERTY()
	bool IsDownloading;

	UPROPERTY()
	FText DownloadStatus;

public:
	DEADBYDAYLIGHT_API FDownloadProgression();
};

FORCEINLINE uint32 GetTypeHash(const FDownloadProgression) { return 0; }
