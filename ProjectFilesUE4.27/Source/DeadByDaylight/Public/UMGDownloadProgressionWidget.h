#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "DownloadProgression.h"
#include "UMGDownloadProgressionWidget.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS(EditInlineNew)
class UUMGDownloadProgressionWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UProgressBar* ProgressBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* DownloadPercentage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* DownloadDescription;

public:
	UFUNCTION()
	void UpdateProgression(const FDownloadProgression& downloadProgression);

public:
	UUMGDownloadProgressionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGDownloadProgressionWidget) { return 0; }
